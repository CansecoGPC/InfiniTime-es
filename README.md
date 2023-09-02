# [InfiniTime-es](https://github.com/InfiniTimeOrg/InfiniTime)

![InfiniTime logo](doc/logo/infinitime-logo-small.jpg "InfiniTime Logo")

Firmware rápido de código abierto para el reloj inteligente [PineTime](https://www.pine64.org/pinetime/) con muchas funciones, escrito en C++ moderno.

La interfaz de usuario de esta versión está traducida al español.

## ¿Nuevo a InfiniTime?

- [Primeros pasos con InfiniTime](doc/gettingStarted/gettingStarted-1.0.md)
- [Actualizar el software](doc/gettingStarted/updating-software.md)
- [Sobre el firmware y el gestor de arranque](doc/gettingStarted/about-software.md)
- [PineTimeStyle cara del reloj](https://wiki.pine64.org/wiki/PineTimeStyle) (en ingl
  - [Información del tiempo](https://wiki.pine64.org/wiki/Infinitime-Weather)

### Aplicaciones complementarias

- [Gadgetbridge](https://gadgetbridge.org/) (Android)
- [AmazFish](https://openrepos.net/content/piggz/amazfish/) (SailfishOS)
- [Siglo](https://github.com/alexr4535/siglo) (Linux)
- [InfiniLink](https://github.com/InfiniTimeOrg/InfiniLink) (iOS) **[Buscando un nuevo mantenedor]**
- [ITD](https://gitea.elara.ws/Elara6331/itd) (Linux)
- [WatchMate](https://github.com/azymohliad/watchmate) (Linux)

***Nota** : Eliminamos las referencias a NRFConnect porque es de código cerrado y las versiones recientes ya no funcionan con InfiniTime (la última versión conocida que funciona es 4.24.3). Si utilizó NRFConnect en el pasado, le recomendamos que cambie a [Gadgetbridge](https://gadgetbridge.org/).*

## Desarrolo

- [Visión de InfiniTime](doc/InfiniTimeVision.md)
- [Estructura aproximada del código](doc/code/Intro.md)
- [Cómo escribir una aplicación](doc/code/Apps.md)
- [Cómo generar las fuentes y los símbolos](src/displayapp/fonts/README.md)
- [Sugerencias para diseñar la IU de una aplicación](doc/ui_guidelines.md)
- [Gestor de arranque, OTA y DFU](bootloader/README.md)
- [Recursos externos](doc/ExternalResources.md)

### Contribuir

- [Cómo contribuir](CONTRIBUTING.md)
- [Convención de codificación](doc/coding-convention.md)

### Compilar, flashear y depurar

- [Simulador de InfiniTime](https://github.com/InfiniTimeOrg/InfiniSim)
- [Compilar el proyecto](doc/buildAndProgram.md)
- [Compilar el proyecto con Docker](doc/buildWithDocker.md)
- [Compilar el proyecto con VSCode](doc/buildWithVScode.md)
- [Flashear el firmware con OpenOCD STLinkV2](doc/openOCD.md)
- [Flashear el firmware con la interfaz SWD](doc/SWD.md)
- [Flashear el firmware con JLink](doc/jlink.md)
- [Flashear el firmware con GDB](doc/gdb.md)
- [Stub con NRF52-DK](doc/PinetimeStubWithNrf52DK.md)

### API

- [Implementación y API de BLE](doc/ble.md)

### Arquitectura y temas técnicos

- [Análisis de memoria](doc/MemoryAnalysis.md)

### Gestión de proyecto

- [Guía del mantenedor](doc/maintainer-guide.md)
- [Versionando](doc/versioning.md)
- [Ramas del proyecto](doc/branches.md)
- [Archivos incluidos en las notas de la versión](doc/filesInReleaseNotes.md)
- [Archivos necesarios para la fábrica](doc/files-needed-by-factory.md)

## Licencias

Este proyecto se publica bajo la GNU General Public License (Licencia Pública General) versión 3 o, a su elección, cualquier versión posterior.

Integra los siguientes proyectos:

- RTOS : **[FreeRTOS](https://freertos.org)** bajo la licencia MIT
- UI : **[LittleVGL/LVGL](https://lvgl.io/)** bajo la licencia MIT
- Pila BLE : **[NimBLE](https://github.com/apache/mynewt-nimble)** bajo la licencia Apache 2.0
- Fuente : **[Jetbrains Mono](https://www.jetbrains.com/fr-fr/lp/mono/)** bajo la licencia Apache 2.0

## Créditos

(en inglés; del desarrollador original de InfiniTime)

I’m not working alone on this project. First, many people create PR for this project. Then, there is the whole #pinetime community : a lot of people all around the world who are hacking, searching, experimenting and programming the Pinetime. We exchange our ideas, experiments and code in the chat rooms and forums.

Here are some people I would like to highlight:

- [Atc1441](https://github.com/atc1441/) : He works on an Arduino based firmware for the Pinetime and many other smartwatches based on similar hardware. He was of great help when I was implementing support for the BMA421 motion sensor and I²C driver.
- [Koen](https://github.com/bosmoment) : He’s working on a firmware based on RiotOS. He integrated similar libs as me : NimBLE, LittleVGL,… His help was invaluable too!
- [Lup Yuen Lee](https://github.com/lupyuen) : He is everywhere: he works on a Rust firmware, builds a MCUBoot based bootloader for the Pinetime, designs a Flutter based companion app for smartphones and writes a lot of articles about the Pinetime!
