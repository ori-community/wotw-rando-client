#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SinMovingPlatform.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Archive.h>

namespace app::classes::SinMovingPlatform {
    IL2CPP_REGISTER_METHOD(0x0074AB10, bool, get_IsSuspended, (app::SinMovingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074AB20, void, set_IsSuspended, (app::SinMovingPlatform * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF8B0, app::SuspendableMask__Enum, get_Mask, (app::SinMovingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074AB30, void, set_Mask, (app::SinMovingPlatform * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0074ABE0, void, Awake, (app::SinMovingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074AC80, void, OnDestroy, (app::SinMovingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074AD20, void, Serialize, (app::SinMovingPlatform * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0074AD70, void, Start, (app::SinMovingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074AF90, void, FixedUpdate, (app::SinMovingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074B010, void, UpdatePosition, (app::SinMovingPlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074B500, void, ctor, (app::SinMovingPlatform * this_ptr))
} // namespace app::classes::SinMovingPlatform
