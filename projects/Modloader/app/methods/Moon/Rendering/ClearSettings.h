#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ClearSettings.h>
#include <Modloader/app/structs/ClearSettings__Boxed.h>
#include <Modloader/app/structs/ClearFlags__Enum.h>
#include <Modloader/app/structs/Color.h>

namespace app::classes::Moon::Rendering::ClearSettings {
    IL2CPP_REGISTER_METHOD(0x00C537F0, app::ClearSettings, get_nothing, ())
    IL2CPP_REGISTER_METHOD(0x0011D620, bool, get_isNothing, (app::ClearSettings__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011D630, bool, get_doColor, (app::ClearSettings__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011D640, bool, get_doDepth, (app::ClearSettings__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011D650, void, ctor, (app::ClearSettings__Boxed * this_ptr, app::ClearFlags__Enum flags, app::Color color, float depth))
    IL2CPP_REGISTER_METHOD(0x00C53830, app::ClearSettings, op_Implicit, (app::ClearFlags__Enum flags))
} // namespace app::classes::Moon::Rendering::ClearSettings
