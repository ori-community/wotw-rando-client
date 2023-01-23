#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShootProjectileBehaviour.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>

namespace app::classes::ShootProjectileBehaviour {
    IL2CPP_REGISTER_METHOD(0x005B67B0, void, OnInitialize, (app::ShootProjectileBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B6890, void, OnExecute, (app::ShootProjectileBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x005B6F50, void, ShootProjectile, (app::ShootProjectileBehaviour * this_ptr, float angle))
    IL2CPP_REGISTER_METHOD(0x005B7400, void, Shoot, (app::ShootProjectileBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B7700, void, ShootingFinished, (app::ShootProjectileBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047103E8, ShootProjectileBehaviour_ShootingFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateBehaviour, (app::ShootProjectileBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B7710, void, OnEndBehaviour, (app::ShootProjectileBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, (app::ShootProjectileBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B7D20, void, OnDrawGizmosSelected, (app::ShootProjectileBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B7FD0, void, ctor, (app::ShootProjectileBehaviour * this_ptr))
} // namespace app::classes::ShootProjectileBehaviour
