#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MinerThrowAttack {
    IL2CPP_REGISTER_METHOD(0x01450DE0, void, Shoot, (app::MinerThrowAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477C120, MinerThrowAttack_Shoot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01451210, void, Throw, (app::MinerThrowAttack * this_ptr, app::Vector2 shoot_point, app::Vector3 shoot_velocity))
    IL2CPP_REGISTER_METHOD(0x01451460, void, OnEntityInitialized, (app::MinerThrowAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01451470, app::BehaviourStatus__Enum, OnExecute, (app::MinerThrowAttack * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x014515C0, void, OnEnter, (app::MinerThrowAttack * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01451A20, void, Aim, (app::MinerThrowAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476E520, MinerThrowAttack_Aim__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01451B10, void, DisableProjectile, (app::MinerThrowAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01451BF0, void, EnableProjectile, (app::MinerThrowAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01451CD0, void, PullOut, (app::MinerThrowAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472B4B8, MinerThrowAttack_PullOut__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01451F10, void, OnExit, (app::MinerThrowAttack * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01452330, void, ctor, (app::MinerThrowAttack * this_ptr))
}
