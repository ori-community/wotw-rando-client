#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SkeetoLockLookDirection {
    IL2CPP_REGISTER_METHOD(0x007586C0, app::Vector3, get_TargetPosition, (app::SkeetoLockLookDirection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00758710, void, OnEntityInitialized, (app::SkeetoLockLookDirection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007587F0, void, OnEnter, (app::SkeetoLockLookDirection * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417920, app::BehaviourStatus__Enum, OnExecute, (app::SkeetoLockLookDirection * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00758B20, void, ctor, (app::SkeetoLockLookDirection * this_ptr))
} // namespace app::classes::SkeetoLockLookDirection
