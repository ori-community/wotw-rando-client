#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FaderBrightnessContrastSettings.h>

namespace app::classes::FaderBrightnessContrastSettings {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FaderBrightnessContrastSettings * this_ptr))
}
