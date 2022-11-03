#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlatformMovementEnvironmentForceController {
    IL2CPP_REGISTER_METHOD(0x0116EEF0, void, Awake, (app::PlatformMovementEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0116EF90, void, OnDestroy, (app::PlatformMovementEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0116F030, bool, ShouldApplyForces, (app::PlatformMovementEnvironmentForceController * this_ptr, app::Rigidbody* rigidbody))
    IL2CPP_REGISTER_METHOD(0x0116F0D0, void, FixedUpdate, (app::PlatformMovementEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_IsSuspended, (app::PlatformMovementEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_IsSuspended, (app::PlatformMovementEnvironmentForceController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006410F0, app::SuspendableMask__Enum, get_Mask, (app::PlatformMovementEnvironmentForceController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0116F3C0, void, set_Mask, (app::PlatformMovementEnvironmentForceController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0116F470, void, ctor, (app::PlatformMovementEnvironmentForceController * this_ptr))
} // namespace app::classes::PlatformMovementEnvironmentForceController
