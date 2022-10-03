#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::LizardSpitAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x01109E10, void, OnEntityInitialized, (app::LizardSpitAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01109EB0, void, OnEnter, (app::LizardSpitAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0110A280, app::Vector3, RootMotionProc, (app::LizardSpitAttackBehaviour * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHOD(0x0110A330, app::BehaviourStatus__Enum, OnExecute, (app::LizardSpitAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008C8490, void, OnExit, (app::LizardSpitAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F17370, void, StartTimeline, (app::LizardSpitAttackBehaviour * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop))
    IL2CPP_REGISTER_METHOD(0x008C8490, void, StopCurrentTimeline, (app::LizardSpitAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0110A460, void, ShootProjectile, (app::LizardSpitAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471F978, LizardSpitAttackBehaviour_ShootProjectile__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0110A910, void, ctor, (app::LizardSpitAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00754B80, void, _OnEnter_b__9_0, (app::LizardSpitAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475A7F0, LizardSpitAttackBehaviour__OnEnter_b__9_0__MethodInfo)
} // namespace app::classes::Moon::LizardSpitAttackBehaviour
