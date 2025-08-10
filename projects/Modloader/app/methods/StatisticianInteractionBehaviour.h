#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/StatisticianInteractionBehaviour.h>
#include <Modloader/app/structs/StatisticianInteractionBehaviour_InteractionStates__Enum.h>

namespace app::classes::StatisticianInteractionBehaviour {
    IL2CPP_REGISTER_METHOD(0x009B8C30, void, OnEntityInitialized, app::StatisticianInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009B8DF0, void, OnEnter, app::StatisticianInteractionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x009B92D0, app::BehaviourStatus__Enum, OnExecute, app::StatisticianInteractionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x009B9390, void, OnExit, app::StatisticianInteractionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(
        0x009B97D0,
        void,
        ChangeState,
        app::StatisticianInteractionBehaviour* this_ptr,
        app::StatisticianInteractionBehaviour_InteractionStates__Enum state
    )
    IL2CPP_REGISTER_METHOD(0x009B9A80, void, Introduction, app::StatisticianInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009B9BF0, void, PlayTalkA, app::StatisticianInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009B9D60, void, PlayTalkB, app::StatisticianInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009B9FD0, void, Hide, app::StatisticianInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x009BA210,
        void,
        PlayTimeline,
        app::StatisticianInteractionBehaviour* this_ptr,
        app::MoonTimeline* timeline,
        app::Action* on_finished
    )
    IL2CPP_REGISTER_METHOD(0x009BA340, void, OnShowStatsActivated, app::StatisticianInteractionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x009BA350, void, OnFarewellDialogStarts, app::StatisticianInteractionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x009BA3E0, void, OnOfferStatsDialogStarts, app::StatisticianInteractionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::StatisticianInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, app::StatisticianInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009BA550, void, _PlayTalkA_b__23_0, app::StatisticianInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009BA570, void, _PlayTalkB_b__24_0, app::StatisticianInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009BA6E0, void, _PlayTalkB_b__24_2, app::StatisticianInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009BA6E0, void, _PlayTalkB_b__24_1, app::StatisticianInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009BA700, void, _Hide_b__25_0, app::StatisticianInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00754B80, void, _Hide_b__25_2, app::StatisticianInteractionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00754B80, void, _Hide_b__25_1, app::StatisticianInteractionBehaviour* this_ptr)
} // namespace app::classes::StatisticianInteractionBehaviour
