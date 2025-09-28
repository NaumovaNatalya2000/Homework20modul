#include "TCPCHAT.h"

//определим define
#define PORT 7777
#define MESSAGE_LENGTH 1024

//определим глобальные переменные
struct sockaddr_in address, client;
char message[MESSAGE_LENGTH];
socklen_t length;
int socket_file_descriptor, bind_status, connect_status, listen_status, accept_connection;
const char* end_string = "end";

void TCP_CHAT_FUN(){

    ///////////////1. Создание сокета///////////////
    socket_file_descriptor = socket(AF_INET, SOCK_STREAM, 0);
    if (socket_file_descriptor == -1){
        std::cout << "Ошибка создания сокета!" << std::endl;
        pauseWindow();
        return;
    }
    ///////////////2. Заполняем структуру sockaddr_in address///////////////
    address.sin_family = AF_INET;
    address.sin_port = htons(PORT);
    address.sin_addr.s_addr = inet_addr("127.0.0.1");
    ///////////////3. Попытка connect - если удастся, то мы на стороне клиента, иначе, на стороне сервера///////////////
    connect_status = connect(socket_file_descriptor, (struct sockaddr*)&address, sizeof(address));
    if(connect_status == 0){
        ///////////////Цикл клиента///////////////
        std::cout << "===Произведен вход в чат на стороне клиента.===" << std::endl;
        while(1){
            bzero(message, MESSAGE_LENGTH);
            std::cout << "Введите сообщение для отправки на сервер:" << std::endl;
            std::cin.getline(message, MESSAGE_LENGTH);
            if(strncmp(end_string, message, 3) == 0){
                write(socket_file_descriptor, message, sizeof(message));
                std::cout << "===Клиент завершил соединение!===" << std::endl;
                break;
            }
            ssize_t bytes = write(socket_file_descriptor, message, sizeof(message));
            if(bytes >= 0){
                std::cout << "===Сообщение передано на сервер успешно!===" << std::endl;
            }
            bzero(message, sizeof(message));
            read(socket_file_descriptor, message, sizeof(message));
            std::cout << "Сообщение от сервера: " << message << std::endl;
        }
    }
    
    else{
        ///////////////Цикл сервера///////////////
        std::cout << "===Произведен вход в чат на стороне сервера.===" << std::endl;
        ///////////////Привязывем сокет - bind///////////////
        bind_status = bind(socket_file_descriptor, (struct sockaddr*)&address, sizeof(address));
        if(bind_status == -1){
            std::cout << "Ошибка привязки сокета!" << std::endl;
            pauseWindow();
            close(socket_file_descriptor);
            return;
        }
        ///////////////Встаем на прослушку - listen///////////////
        listen_status = listen(socket_file_descriptor, 5);
        if(listen_status == -1){
            std::cout << "Ошибка: не удалось прослушать новые соединения!" << std::endl;
            pauseWindow();
            close(socket_file_descriptor);
            return;
        }
        ///////////////Получаем информацию о полностью установленном соединении - accept///////////////
        length = sizeof(client);
        accept_connection = accept(socket_file_descriptor, (struct sockaddr*)&client, &length);
        if(accept_connection == -1){
            std::cout << "Сервер не смог получить данные от клиента!" << std::endl;
            pauseWindow();
            close(socket_file_descriptor);
            return;
        }
        //если соединение установилось, заходим в цикл приема - поступления сообщений
        while(1){
            bzero(message, MESSAGE_LENGTH);
            read(accept_connection, message, sizeof(message));
            if(strncmp(end_string, message, 3) == 0){
                std::cout << "===Клиент завершил соединение.===" << std::endl;
                break;
            }
            std::cout << "Сообщение, полученное от клиента: " << message << std::endl;
            bzero(message, MESSAGE_LENGTH);
            std::cout << "Введите сообщение для отправки клиенту:" << std::endl;
            std::cin.getline(message, MESSAGE_LENGTH);
            ssize_t bytes = write(accept_connection, message, sizeof(message));
            if(bytes >=0){
                std::cout << "===Отправка сообщения прошла успешно!===" << std::endl;
            }
        }
        close(socket_file_descriptor);
        return;
    }
    pauseWindow();
    close(socket_file_descriptor);
}