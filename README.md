[Клиент-Сервер.drawio](https://github.com/user-attachments/files/22582299/-.drawio)# Программа "Чатик"
## Схема реализации TCP чата между двумя запущенными процессами программы на одном ПК
[Uploading Клиент-Сервер.drawi<mxfile host="app.diagrams.net" agent="Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/140.0.0.0 Safari/537.36" version="28.2.3">
  <diagram name="Страница — 1" id="NaA7vKiHDMzFMLcdtvyA">
    <mxGraphModel dx="2752" dy="2556" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-3" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-1" target="bNsLWlIrNEiIMY3Y1SiT-2">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-1" value="&lt;div&gt;ШАГ 1.&lt;/div&gt;Создание сокета&lt;div&gt;socket()&lt;/div&gt;" style="rounded=0;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="350" y="33" width="126" height="60" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-7" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-2" target="bNsLWlIrNEiIMY3Y1SiT-5">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-10" value="Да" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" vertex="1" connectable="0" parent="bNsLWlIrNEiIMY3Y1SiT-7">
          <mxGeometry x="-0.3467" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-26" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-2" target="bNsLWlIrNEiIMY3Y1SiT-25">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-41" value="Нет" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" vertex="1" connectable="0" parent="bNsLWlIrNEiIMY3Y1SiT-26">
          <mxGeometry x="-0.391" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-2" value="socket() успешно?" style="rhombus;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="324" y="123" width="178" height="80" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-12" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-5" target="bNsLWlIrNEiIMY3Y1SiT-11">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-5" value="ШАГ 2.&lt;div&gt;Заполняем структуру sockaddr_in&lt;/div&gt;" style="rounded=0;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="502" y="203" width="127" height="60" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-14" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-11" target="bNsLWlIrNEiIMY3Y1SiT-13">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-11" value="ШАГ 3.&lt;div&gt;Попытка connect()&lt;/div&gt;" style="whiteSpace=wrap;html=1;rounded=0;" vertex="1" parent="1">
          <mxGeometry x="502" y="303" width="127" height="60" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-18" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-13" target="bNsLWlIrNEiIMY3Y1SiT-15">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-20" value="Нет" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" vertex="1" connectable="0" parent="bNsLWlIrNEiIMY3Y1SiT-18">
          <mxGeometry x="-0.3463" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-80" value="Да" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-13" target="bNsLWlIrNEiIMY3Y1SiT-16">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-13" value="connect() успешно?" style="rhombus;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="476" y="403" width="178" height="80" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-40" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-15" target="bNsLWlIrNEiIMY3Y1SiT-39">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-15" value="ШАГ 4.&lt;div&gt;Попытка bind()&lt;/div&gt;" style="rounded=0;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="352" y="483" width="125" height="60" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-83" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-16" target="bNsLWlIrNEiIMY3Y1SiT-75">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-16" value="Переходим в цикл чтения-отправки" style="rounded=0;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="824.5" y="483" width="125" height="60" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-24" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-23" target="bNsLWlIrNEiIMY3Y1SiT-1">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-23" value="Вход в функцию" style="ellipse;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="349" y="-47" width="128" height="47" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-25" value="Выход из функции" style="ellipse;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="196" y="203" width="128" height="47" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-33" value="Программа запущена на стороне сервера" style="text;html=1;align=center;verticalAlign=middle;whiteSpace=wrap;rounded=0;" vertex="1" parent="1">
          <mxGeometry x="244" y="463" width="80" height="100" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-34" value="" style="strokeWidth=2;html=1;shape=mxgraph.flowchart.annotation_2;align=left;labelPosition=right;pointerEvents=1;direction=west;" vertex="1" parent="1">
          <mxGeometry x="302" y="463" width="50" height="100" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-35" value="" style="strokeWidth=2;html=1;shape=mxgraph.flowchart.annotation_2;align=left;labelPosition=right;pointerEvents=1;direction=east;" vertex="1" parent="1">
          <mxGeometry x="949.5" y="463" width="50" height="100" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-36" value="Программа запущена на стороне клиента" style="text;html=1;align=center;verticalAlign=middle;whiteSpace=wrap;rounded=0;" vertex="1" parent="1">
          <mxGeometry x="980" y="463" width="80" height="100" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-44" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-39" target="bNsLWlIrNEiIMY3Y1SiT-42">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-46" value="Нет" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" vertex="1" connectable="0" parent="bNsLWlIrNEiIMY3Y1SiT-44">
          <mxGeometry x="-0.4103" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-45" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-39" target="bNsLWlIrNEiIMY3Y1SiT-43">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-47" value="Да" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" vertex="1" connectable="0" parent="bNsLWlIrNEiIMY3Y1SiT-45">
          <mxGeometry x="-0.4455" y="2" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-39" value="bind() успешно?" style="rhombus;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="325.5" y="585" width="178" height="80" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-42" value="Выход из функции" style="ellipse;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="197.5" y="665" width="128" height="47" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-49" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-43" target="bNsLWlIrNEiIMY3Y1SiT-48">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-43" value="ШАГ 5.&lt;div&gt;Попытка listen()&lt;/div&gt;" style="rounded=0;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="502" y="665" width="125" height="60" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-52" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-48" target="bNsLWlIrNEiIMY3Y1SiT-50">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-55" value="Нет" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" vertex="1" connectable="0" parent="bNsLWlIrNEiIMY3Y1SiT-52">
          <mxGeometry x="-0.4263" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-53" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-48" target="bNsLWlIrNEiIMY3Y1SiT-51">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-54" value="Да" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" vertex="1" connectable="0" parent="bNsLWlIrNEiIMY3Y1SiT-53">
          <mxGeometry x="-0.4401" y="-1" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-48" value="listen() успешно?" style="rhombus;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="475.5" y="760" width="178" height="80" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-50" value="Выход из функции" style="ellipse;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="347.5" y="840" width="128" height="47" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-57" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-51" target="bNsLWlIrNEiIMY3Y1SiT-56">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-51" value="ШАГ 6.&lt;div&gt;Попытка accept()&lt;/div&gt;" style="rounded=0;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="654" y="840" width="125" height="60" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-60" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-56" target="bNsLWlIrNEiIMY3Y1SiT-58">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-61" value="Нет" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" vertex="1" connectable="0" parent="bNsLWlIrNEiIMY3Y1SiT-60">
          <mxGeometry x="-0.5024" y="-1" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-64" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-56" target="bNsLWlIrNEiIMY3Y1SiT-63">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-84" value="Да" style="edgeLabel;html=1;align=center;verticalAlign=middle;resizable=0;points=[];" vertex="1" connectable="0" parent="bNsLWlIrNEiIMY3Y1SiT-64">
          <mxGeometry x="-0.3414" y="2" relative="1" as="geometry">
            <mxPoint as="offset" />
          </mxGeometry>
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-56" value="accept() успешно?" style="rhombus;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="627.5" y="930" width="178" height="80" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-58" value="Выход из функции" style="ellipse;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="499" y="1010" width="128" height="47" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-68" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-63" target="bNsLWlIrNEiIMY3Y1SiT-67">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-72" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-63" target="bNsLWlIrNEiIMY3Y1SiT-71">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-63" value="Чтение-отправка сообщений" style="shape=hexagon;perimeter=hexagonPerimeter2;whiteSpace=wrap;html=1;fixedSize=1;" vertex="1" parent="1">
          <mxGeometry x="810" y="1010" width="120" height="80" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-66" value="read" style="rounded=0;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="807.5" y="1120" width="125" height="60" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-70" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-67" target="bNsLWlIrNEiIMY3Y1SiT-63">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-67" value="write" style="rounded=0;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="807.5" y="1210" width="125" height="60" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-71" value="Выход из функции" style="ellipse;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="960" y="1120" width="128" height="47" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-74" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=1;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-75" target="bNsLWlIrNEiIMY3Y1SiT-79">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-82" value="" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-75" target="bNsLWlIrNEiIMY3Y1SiT-78">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-75" value="Чтение-отправка сообщений" style="shape=hexagon;perimeter=hexagonPerimeter2;whiteSpace=wrap;html=1;fixedSize=1;" vertex="1" parent="1">
          <mxGeometry x="827" y="585" width="120" height="80" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-76" value="read" style="rounded=0;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="824.5" y="700" width="125" height="60" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-77" style="edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" edge="1" parent="1" source="bNsLWlIrNEiIMY3Y1SiT-78" target="bNsLWlIrNEiIMY3Y1SiT-75">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-78" value="write" style="rounded=0;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="824.5" y="780" width="125" height="60" as="geometry" />
        </mxCell>
        <mxCell id="bNsLWlIrNEiIMY3Y1SiT-79" value="Выход из функции" style="ellipse;whiteSpace=wrap;html=1;" vertex="1" parent="1">
          <mxGeometry x="990" y="690" width="128" height="47" as="geometry" />
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
o…]()


## Класс User:
##### Переменные:
- `std::string _login` - логин
- `std::vector<uint8_t> _password` - пароль
- `std::string _name` - имя
- `std::vector<Messages> MessageList` - вектор сообщений сотрудника
Пароль типа unsigned int 8 для хранения хеша пароля после прохождения через функцию sha1
##### Методы класса:
- конструктор с параметрами для создания нового пользователя:
  `User(const std::string& login, const std::vector<uint8_t>& password, const std::string& name);`
- деструктор - по умолчанию
- сеттеров нет - изменение данных УЗ на текущий момент не предусмотрено
- геттеры - для логина и имени
- метод добавления сообщения:
  `void addMessage(const std::string& fromUser, const std::string& text);`
  В нем две переменные передаются - от кого отправляется сообщение и текст сообщения
- метод вывода сообщений сотрудника:
  `void PrintMessage();`
- метод сравнения паролей:
  `bool IsCorrectPassword(const std::vector<uint8_t>& password);`
## Класс Messages
##### Переменные:
- `std::string _fromUser` - отправитель
- `std::string _text` - текст сообщения
##### Методы класса:
- конструктор:
  `Messages(const std::string& fromUser, const std::string& text);`
- деструктор - по умолчанию
## Функция SHA1:
Для хеширования пароля - на основе вектора.
## Функции FunctionsSystem:
В данном файле находится две функции:
- `void clearScreen()` - функция очистки экрана
- `void pause()` - функция паузы
## Класс FunctionsMenu:
В main создается контейнер map - в нем хранятся пары - логин - ключ и User (логин, пароль, имя) - значение.
Контейнер передается в функцию главного меню:
`void MainMenu(std::map<std::string, User>& users)`
##### Главное меню:
- **Подменю регистрации:**
  `void RegistrationMenu(std::map<std::string, User>& users)`
- **Подменю сообщений:**
  `void MessageMenu(std::map<std::string, User>& users)`
- Либо произвести выход из программы с помощью символа 'q'
##### Подменю Регистрации:
- `void RegistrationMenu(std::map<std::string, User>& users)`
- Сотрудник вводит логин, пароль и имя.
- Пароль уходит для хеширования в функцию SHA1.
- Выполняется проверка, существует ли уже пользователь с указанным логином - логин у двух сотрудников повторяться не может
- Если УЗ с введенным логином не найдена - создается User
##### Подменю сообщений:
- `void MessageMenu(std::map<std::string, User>& users)`
- Здесь можно вывести список всех доступных логинов и войти по логину и паролю в систему отправки сообщений. При вводе правильного пароля - переход в подменю отправки и просмотра сообщений
##### Подменю отправки и просмотра сообщений:
- `void SendingMenu(std::map<std::string, User>& users, std::map<std::string, User>::iterator it)`
Здесь можно:
- Вывести список пользователей
- Отправка сообщений одному пользователю
- Отправка сообщений всем пользователям
- Вывести список сообщений для меня
##### Функция вывода списка сотрудников:
`void PrintUsers(const std::map<std::string, User>& users)`
##### Функция проверки вводимой строки на пустоту
`std::string NotEmptyString(const std::string& prompt)`
##### Функция проверки вводимого символа перехода по меню на пустоту:
`char NotEmptyChar()`
