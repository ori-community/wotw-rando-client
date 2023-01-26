#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SandstormController.h>
#include <Modloader/app/structs/SandstormController_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SandstormController {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::SandstormController*, get_Instance, (app::SandstormController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C28840, void, Awake, (app::SandstormController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C28920, void, FixedUpdate, (app::SandstormController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C28FA0, bool, get_ShouldApplySandstorm, (app::SandstormController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C291E0, void, ChangeState, (app::SandstormController * this_ptr, app::SandstormController_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x00C292D0, bool, get_SeinInSandstorm, (app::SandstormController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C29440, bool, PointInsideSandstorm, (app::SandstormController * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SandstormController * this_ptr))
} // namespace app::classes::SandstormController
