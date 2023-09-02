# Primeros pasos con InfiniTime

El 22 de abril de 2021, InfiniTime y Pine64 [anunciaron el lanzamiento de InfiniTime 1.0.0](https://www.pine64.org/2021/04/22/its-time-infinitime-1-0/) y la disponibilidad de los relojes inteligentes PineTime como *producto de usuario final de grado entusiasta*. Esta página tiene como objetivo guiarle en el primer paso con su nuevo PineTime.

Se recomienda encarecidamente actualizar el firmware a la última versión cuando reciba su reloj y cuando se publique una nueva versión de InfiniTime. Más información sobre la actualización del firmware [aquí](/doc/gettingStarted/updating-software.md).

## Guía rápida del usuario de InfiniTime

### Configurar la hora

De forma predeterminada, InfiniTime se inicia en la esfera del reloj digital. Probablemente mostrará la época (1 de enero de 1970, 00:00).

Puede sincronizar la hora usando aplicaciones complementarias.

- Gadgetbridge sincroniza automáticamente la hora cuando lo conectas a tu reloj. Más información sobre Gadgetbridge [aquí](/doc/gettingStarted/ota-gadgetbridge.md)
- [Sincronizar la hora con NRFConnect](/doc/gettingStarted/time-nrfconnect.md)
- [Sincronizar la hora con su navegador](https://hubmartin.github.io/WebBLEWatch/)

También puede configurar la hora en la configuración sin una aplicación complementaria. (versión >1.7.0)

InfiniTime no maneja el horario de verano automáticamente, así que asegúrese de configurar la hora correcta o sincronizarla con una aplicación complementaria.

### Esfera del reloj digital

![Esfera del reloj digital](ui/watchface.jpg)

Así es como se ve la esfera del reloj digital predeterminada. Usted puede cambiar las esferas del reloj en la configuración.

El indicador en la parte superior izquierda es visible si usted tiene notificaciones no leídas.

En la parte superior derecha, hay iconos de estado:

- El icono de la batería muestra aproximadamente cuánta carga queda.
- El ícono de Bluetooth es visible cuando el reloj está conectado a una aplicación complementaria.
- Se muestra un icono de enchufe cuando el reloj está conectado a un cargador.

En la parte inferior izquierda, puede ver su frecuencia cardíaca si tiene la medición habilitada en la aplicación de frecuencia cardíaca.

En la parte inferior derecha, usted puede ver cuántos pasos ha dado hoy.

### Navegación en el menú

![Menú de aplicaciones](ui/applist.jpg)
![Notificaciones](ui/notificaciones.jpg)
![Acciones rápidas](ui/quicksettings.jpg)
![Configuración](ui/settings.jpg)

- Deslice **hacia arriba** para mostrar los menús de la aplicación. Desde este menú puede iniciar aplicaciones (cronómetro, música, pasos, juegos,...).
- Deslice **hacia abajo** para mostrar el panel de notificaciones. La notificación enviada por su aplicación complementaria se mostrará aquí.
- Deslice **derecha** para mostrar el menú de Acciones rápidas. Este menú le permite
   - Establecer el brillo de la pantalla.
   - Iniciar la aplicación **linterna**
   - Activar/desactivar notificaciones (modo No molestar)
   - Ingresar al menú **configuración**
     - Deslice hacia arriba y hacia abajo para ver todas las opciones.
- Haga clic en el botón para retroceder una pantalla.
- Usted puede mantener presionado el botón por un momento para regresar a la esfera del reloj. (versión >1.7.0)
