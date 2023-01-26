#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaurInteractionBehaviour.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BaurInteractionBehaviour_InteractionStates__Enum.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::BaurInteractionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00F9A690, void, OnEntityInitialized, (app::BaurInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9A7B0, void, OnEnter, (app::BaurInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F9AB50, app::BehaviourStatus__Enum, OnExecute, (app::BaurInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F9AB90, void, OnExit, (app::BaurInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F9AE90, void, ChangeState, (app::BaurInteractionBehaviour * this_ptr, app::BaurInteractionBehaviour_InteractionStates__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F9AFA0, void, Introduction, (app::BaurInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9AFA0, void, AfterIntroductionRepeat, (app::BaurInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9AFC0, void, Idle, (app::BaurInteractionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9AFE0, void, PlayTimeline, (app::BaurInteractionBehaviour * this_ptr, app::MoonTimeline* timeline, app::Action* on_finished))
    IL2CPP_REGISTER_METHOD(0x00F9B110, void, OnIntroductionDialogStarts, (app::BaurInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F9B1D0, void, OnAfterIntroRepeatDialogStarts, (app::BaurInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::BaurInteractionBehaviour * this_ptr))
} // namespace app::classes::BaurInteractionBehaviour
