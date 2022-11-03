#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossTripleSlamBehaviour {
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::StateMachine_2*, get_StateMachine, (app::PetrifiedOwlBossTripleSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet*, get_States, (app::PetrifiedOwlBossTripleSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177FEB0, void, CopyData, (app::PetrifiedOwlBossTripleSlamBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x0177FFC0, void, OnEntityInitialized, (app::PetrifiedOwlBossTripleSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01780410, void, OnEnter, (app::PetrifiedOwlBossTripleSlamBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017805D0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossTripleSlamBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017806D0, void, OnExit, (app::PetrifiedOwlBossTripleSlamBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01780870, void, Reposition, (app::PetrifiedOwlBossTripleSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01780AD0, void, OnDestructionEvent, (app::PetrifiedOwlBossTripleSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04787560, PetrifiedOwlBossTripleSlamBehaviour_OnDestructionEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01780C60, void, ctor, (app::PetrifiedOwlBossTripleSlamBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossTripleSlamBehaviour
