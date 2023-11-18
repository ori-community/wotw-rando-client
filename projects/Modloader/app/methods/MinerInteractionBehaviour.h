#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MinerInteractionBehaviour.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MinerInteractionBehaviour_InteractionStates__Enum.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::MinerInteractionBehaviour {
    IL2CPP_REGISTER_METHOD(0x0144C570, void, OnEntityInitialized, (app::MinerInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144C810, void, OnEnter, (app::MinerInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0144CBC0, app::BehaviourStatus__Enum, OnExecute, (app::MinerInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0144CBF0, void, OnExit, (app::MinerInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0144D2C0, void, TransitionInFinished, (app::MinerInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144D2D0, void, ChangeState, (app::MinerInteractionBehaviour * this_ptr, app::MinerInteractionBehaviour_InteractionStates__Enum state))
    IL2CPP_REGISTER_METHOD(0x0144D5D0, void, Idle, (app::MinerInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144D7D0, void, Talking, (app::MinerInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144DA30, void, Farewell, (app::MinerInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144DC90, void, PlayTimeline, (app::MinerInteractionBehaviour * this_ptr, app::MoonTimeline* timeline, app::Action* on_finished))
    IL2CPP_REGISTER_METHOD(0x0144DE00, void, OnFarewellDialogStarts, (app::MinerInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0144DEC0, void, OnTalkDialogStarts, (app::MinerInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0144DF80, void, OnAgreedToMoveDialogStarts, (app::MinerInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::MinerInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144E060, void, ctor, (app::MinerInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144D2C0, void, _ChangeState_b__25_0, (app::MinerInteractionBehaviour * this_ptr))
} // namespace app::classes::MinerInteractionBehaviour
