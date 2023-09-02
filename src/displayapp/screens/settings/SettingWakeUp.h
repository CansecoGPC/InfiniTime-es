#pragma once

#include <array>
#include <cstdint>
#include <lvgl/lvgl.h>
#include "components/settings/Settings.h"
#include "displayapp/screens/Screen.h"

namespace Pinetime {

  namespace Applications {
    namespace Screens {

      class SettingWakeUp : public Screen {
      public:
        SettingWakeUp(Pinetime::Controllers::Settings& settingsController);
        ~SettingWakeUp() override;

        void UpdateSelected(lv_obj_t* object);

      private:
        struct Option {
          Controllers::Settings::WakeUpMode wakeUpMode;
          const char* name;
        };

        Controllers::Settings& settingsController;
        static constexpr std::array<Option, 5> options = {{
          {Controllers::Settings::WakeUpMode::SingleTap, "Un Toque"},
          {Controllers::Settings::WakeUpMode::DoubleTap, "Dos Toques"},
          {Controllers::Settings::WakeUpMode::RaiseWrist, "Levanta Reloj"},
          {Controllers::Settings::WakeUpMode::Shake, "Meneo Despert"},
          {Controllers::Settings::WakeUpMode::LowerWrist, "Baja Reloj"},
        }};

        lv_obj_t* cbOption[options.size()];
      };
    }
  }
}
