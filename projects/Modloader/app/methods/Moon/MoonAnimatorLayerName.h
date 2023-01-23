#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/MoonAnimatorLayerName__Boxed.h>

namespace app::classes::Moon::MoonAnimatorLayerName {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::String*, get_DisplayName, (app::MoonAnimatorLayerName__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_DisplayName, (app::MoonAnimatorLayerName__Boxed * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_Uid, (app::MoonAnimatorLayerName__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DC590, bool, get_IsValid, (app::MoonAnimatorLayerName__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011D2D0, void, ctor, (app::MoonAnimatorLayerName__Boxed * this_ptr, app::String* display_name, int32_t uid))
    IL2CPP_REGISTER_METHOD(0x0211C720, void, cctor, ())
} // namespace app::classes::Moon::MoonAnimatorLayerName
