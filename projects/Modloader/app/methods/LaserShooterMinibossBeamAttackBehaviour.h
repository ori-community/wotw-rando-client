#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LaserShooterMinibossBeamAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityInitialized, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F17150, void, OnEnter, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F17280, app::BehaviourStatus__Enum, OnExecute, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F172A0, void, OnExit, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F17370, void, StartTimeline, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop))
    IL2CPP_REGISTER_METHOD(0x00F173B0, void, StopCurrentTimeline, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F17480, void, ClearTimelineStopEvent, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F174E0, void, SetState, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr, app::LaserShooterMinibossBeamAttackBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F17520, void, EnterState, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr, app::LaserShooterMinibossBeamAttackBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F17710, void, UpdateState, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr, app::LaserShooterMinibossBeamAttackBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F17A50, void, ExitState, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr, app::LaserShooterMinibossBeamAttackBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F17C00, void, EnterBeamState, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F18020, void, UpdateBeamAttack, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F18350, void, OnBeamCycleEnd, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473BBC0, LaserShooterMinibossBeamAttackBehaviour_OnBeamCycleEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F184F0, void, EnterAnticState, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F186C0, void, OnAnticTimelineEnds, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470C110, LaserShooterMinibossBeamAttackBehaviour_OnAnticTimelineEnds__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F186F0, void, ctor, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F18780, void, _EnterState_b__19_0, (app::LaserShooterMinibossBeamAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471CB98, LaserShooterMinibossBeamAttackBehaviour__EnterState_b__19_0__MethodInfo)
} // namespace app::classes::LaserShooterMinibossBeamAttackBehaviour
