#pragma once

#include <array>
#include <memory>
#include "displayapp/screens/Screen.h"
#include "displayapp/screens/ScreenList.h"
#include "displayapp/screens/Symbols.h"
#include "displayapp/screens/List.h"

namespace Pinetime {

  namespace Applications {
    namespace Screens {

      class Settings : public Screen {
      public:
        Settings(DisplayApp* app, Pinetime::Controllers::Settings& settingsController);
        ~Settings() override;

        bool OnTouchEvent(Pinetime::Applications::TouchEvents event) override;

      private:
        DisplayApp* app;
        auto CreateScreenList() const;
        std::unique_ptr<Screen> CreateScreen(unsigned int screenNum) const;

        Controllers::Settings& settingsController;

        static constexpr int entriesPerScreen = 4;

        // Increment this when more space is needed
        static constexpr int nScreens = 4;

        static constexpr std::array<List::Applications, entriesPerScreen * nScreens> entries {{
          {Symbols::sun, "Pantalla", Apps::SettingDisplay},
          {Symbols::eye, "Despertar", Apps::SettingWakeUp},
          {Symbols::clock, "Formato Horas", Apps::SettingTimeFormat},
          {Symbols::home, "Tema Reloj", Apps::SettingWatchFace},

          {Symbols::shoe, "Pasos", Apps::SettingSteps},
          {Symbols::clock, "Fecha y Hora", Apps::SettingSetDateTime},
          {Symbols::batteryHalf, "Bateria", Apps::BatteryInfo},
          {Symbols::cloudSunRain, "Tiempo", Apps::SettingWeatherFormat},
          
          {Symbols::clock, "Campanadas", Apps::SettingChimes},
          {Symbols::tachometer, "Meneo Calib.", Apps::SettingShakeThreshold},
          {Symbols::check, "Firmware", Apps::FirmwareValidation},
          {Symbols::bluetooth, "Bluetooth", Apps::SettingBluetooth},

          {Symbols::list, "Acerca de", Apps::SysInfo},

          // {Symbols::none, "None", Apps::None},
          // {Symbols::none, "None", Apps::None},
          // {Symbols::none, "None", Apps::None},
          // {Symbols::none, "None", Apps::None},

        }};
        ScreenList<nScreens> screens;
      };
    }
  }
}
