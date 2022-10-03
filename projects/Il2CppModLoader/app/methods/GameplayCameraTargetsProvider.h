#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GameplayCameraTargetsProvider {
    IL2CPP_REGISTER_METHOD(0x0040F160, void, Awake, (app::GameplayCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040F2E0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0040F3B0, void, UpdateTargets, (app::GameplayCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040F4B0, void, Register, (app::ICameraTarget * target))
    IL2CPP_REGISTER_METHOD(0x0040F5E0, void, Unregister, (app::ICameraTarget * target))
    IL2CPP_REGISTER_METHOD(0x0040F6C0, app::List_1_Moon_CameraTargetSettings_*, GetTargets, (app::GameplayCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040FF50, app::Vector3, GetOriGroundPosition, (app::GameplayCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00410050, app::Vector3, GetPos, (app::GameplayCameraTargetsProvider * this_ptr, app::GameplayCameraTargetEntry entry))
    IL2CPP_REGISTER_METHOD(0x00410280, void, ctor, (app::GameplayCameraTargetsProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004107A0, void, cctor, ())
} // namespace app::classes::GameplayCameraTargetsProvider
