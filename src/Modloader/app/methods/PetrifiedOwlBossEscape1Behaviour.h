#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_EscapePart.h>
#include <Modloader/app/structs/StateMachine_2.h>

namespace app::classes::PetrifiedOwlBossEscape1Behaviour {
    IL2CPP_REGISTER_METHOD(
        0x005FDE00,
        app::PetrifiedOwlBossEscape1Behaviour_EscapePart*,
        get_CurrentEscapePart,
        app::PetrifiedOwlBossEscape1Behaviour* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x017613D0,
        void,
        set_CurrentEscapePart,
        app::PetrifiedOwlBossEscape1Behaviour* this_ptr,
        app::PetrifiedOwlBossEscape1Behaviour_EscapePart* value
    )
    IL2CPP_REGISTER_METHOD(0x011354B0, app::StateMachine_2*, get_StateMachine, app::PetrifiedOwlBossEscape1Behaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0071EAB0,
        app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet*,
        get_States,
        app::PetrifiedOwlBossEscape1Behaviour* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x017614D0, void, OnEntityInitialized, app::PetrifiedOwlBossEscape1Behaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01761B70, void, OnEnter, app::PetrifiedOwlBossEscape1Behaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01761ED0, app::BehaviourStatus__Enum, OnExecute, app::PetrifiedOwlBossEscape1Behaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01761FD0, void, OnExit, app::PetrifiedOwlBossEscape1Behaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x017621F0, void, ResetEscapeParts, app::PetrifiedOwlBossEscape1Behaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017622F0, void, CheckShouldStartNewPart, app::PetrifiedOwlBossEscape1Behaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01762420, void, OnBreakArena1Event, app::PetrifiedOwlBossEscape1Behaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017624F0, void, ctor, app::PetrifiedOwlBossEscape1Behaviour* this_ptr)
} // namespace app::classes::PetrifiedOwlBossEscape1Behaviour
