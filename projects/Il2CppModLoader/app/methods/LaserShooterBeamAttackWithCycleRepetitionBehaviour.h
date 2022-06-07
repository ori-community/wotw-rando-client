#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LaserShooterBeamAttackWithCycleRepetitionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00F115E0, void, OnEntityInitialized, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F11620, void, OnEnter, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00F116C0, app::BehaviourStatus__Enum, OnExecute, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00F11840, void, OnExit, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00F118B0, void, StartTimeline, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr, app::MoonTimeline * timeline, app::Action * on_stop))
    IL2CPP_REGISTER_METHOD(0x00F118F0, void, StopCurrentTimeline, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F11920, void, SetState, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr, app::LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F11960, void, EnterState, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr, app::LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F11B50, void, UpdateState, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr, app::LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F11CD0, void, ExitState, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr, app::LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F11D70, void, EnterBeamState, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F11F60, void, OnBeamCycleEnd, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04709368, LaserShooterBeamAttackWithCycleRepetitionBehaviour_OnBeamCycleEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F12150, void, EnterAnticState, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F122E0, void, OnAnticTimelineEnds, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04765440, LaserShooterBeamAttackWithCycleRepetitionBehaviour_OnAnticTimelineEnds__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F12310, void, UpdateBeamAttack, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F123F0, void, UpdateRotation, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F12970, void, ctor, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F12AF0, void, _EnterState_b__20_0, (app::LaserShooterBeamAttackWithCycleRepetitionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470A7C8, LaserShooterBeamAttackWithCycleRepetitionBehaviour__EnterState_b__20_0__MethodInfo)
}
