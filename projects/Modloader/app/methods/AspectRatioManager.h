#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AspectRatioManager.h>

namespace app::classes::AspectRatioManager {
    IL2CPP_REGISTER_METHOD(0x008415E0, float, get_AspectRatio, ())
    IL2CPP_REGISTER_METHOD(0x00841680, void, FixedUpdate, (app::AspectRatioManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00841860, float, get_ExtraPadding, ())
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AspectRatioManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00841AD0, void, cctor, ())
} // namespace app::classes::AspectRatioManager
