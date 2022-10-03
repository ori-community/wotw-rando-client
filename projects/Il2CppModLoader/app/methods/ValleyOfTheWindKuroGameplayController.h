#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ValleyOfTheWindKuroGameplayController {
    IL2CPP_REGISTER_METHOD(0x013B8420, void, Awake, (app::ValleyOfTheWindKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B85D0, void, OnDestroy, (app::ValleyOfTheWindKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B8780, void, OnGameSerializeLoad, (app::ValleyOfTheWindKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047098F0, ValleyOfTheWindKuroGameplayController_OnGameSerializeLoad__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013B8790, void, FixedUpdate, (app::ValleyOfTheWindKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F83F60, bool, get_IsSuspended, (app::ValleyOfTheWindKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F83F70, void, set_IsSuspended, (app::ValleyOfTheWindKuroGameplayController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004C6660, app::SuspendableMask__Enum, get_Mask, (app::ValleyOfTheWindKuroGameplayController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B8EF0, void, set_Mask, (app::ValleyOfTheWindKuroGameplayController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x013B8FA0, void, Serialize, (app::ValleyOfTheWindKuroGameplayController * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x013B8FD0, void, ctor, (app::ValleyOfTheWindKuroGameplayController * this_ptr))
} // namespace app::classes::ValleyOfTheWindKuroGameplayController
