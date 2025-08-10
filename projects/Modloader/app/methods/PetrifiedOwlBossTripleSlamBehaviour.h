#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet.h>
#include <Modloader/app/structs/PetrifiedOwlBossTripleSlamBehaviour.h>
#include <Modloader/app/structs/StateMachine_2.h>

namespace app::classes::PetrifiedOwlBossTripleSlamBehaviour {
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::StateMachine_2*, get_StateMachine, app::PetrifiedOwlBossTripleSlamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x006A63A0,
        app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet*,
        get_States,
        app::PetrifiedOwlBossTripleSlamBehaviour* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0177FEB0, void, CopyData, app::PetrifiedOwlBossTripleSlamBehaviour* this_ptr, app::PetrifiedOwlBossBaseBehaviour* other)
    IL2CPP_REGISTER_METHOD(0x0177FFC0, void, OnEntityInitialized, app::PetrifiedOwlBossTripleSlamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01780410, void, OnEnter, app::PetrifiedOwlBossTripleSlamBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x017805D0, app::BehaviourStatus__Enum, OnExecute, app::PetrifiedOwlBossTripleSlamBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x017806D0, void, OnExit, app::PetrifiedOwlBossTripleSlamBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01780870, void, Reposition, app::PetrifiedOwlBossTripleSlamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01780AD0, void, OnDestructionEvent, app::PetrifiedOwlBossTripleSlamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01780C60, void, ctor, app::PetrifiedOwlBossTripleSlamBehaviour* this_ptr)
} // namespace app::classes::PetrifiedOwlBossTripleSlamBehaviour
