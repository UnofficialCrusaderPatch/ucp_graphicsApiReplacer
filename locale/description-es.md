# Graphics API Replacer

**Autores**: TheRedDaemon, gynt

[ucp_graphicsApiReplacer](https://github.com/TheRedDaemon/ucp_graphicsApiReplacer)

Este módulo sustituye el antiguo sistema de visualización DirectDraw por uno más moderno que utiliza DirectX u OpenGL. Modifica y controla la creación de la ventana, las pocas llamadas DirectDraw utilizadas y algunas funciones de entrada. En esencia, se hace pasar por DirectDraw y proporciona memoria para los fotogramas que Crusader dibuja por software. El resultado se trata como una textura y se muestra mediante DirectX 11 u OpenGL. Las entradas del ratón se adaptan a la nueva visualización.

Actualmente solo se garantiza la compatibilidad con las versiones occidentales de Crusader 1.41 y Crusader Extreme 1.41.1-E. Otras versiones orientales de 1.41 podrían funcionar. Las versiones anteriores a HD (¿1.3?) **NO** funcionan.

### Opciones

Las opciones se explican en detalle en la pestaña de configuración. Estas reglas generales se aplican siempre:

- La resolución del juego solo fija la resolución de renderizado. La de la ventana se establece en las opciones del módulo.
- Se conserva la relación de aspecto del juego. Los espacios vacíos quedan negros y aparecen también en las grabaciones, porque forman parte de la imagen mostrada.
- Mientras se mantenga pulsado uno de los tres botones principales del ratón, el cursor queda limitado a la zona de juego de la ventana.
- Cambiar las opciones requiere reiniciar el juego.

### Comentarios

Si tienes problemas o sugerencias relacionados con el módulo, puedes abrir una issue en GitHub.
