#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_RuntimeQuest_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/QuestItemReward.h>
#include <Modloader/app/structs/QuestReward.h>
#include <Modloader/app/structs/QuestsController.h>
#include <Modloader/app/structs/RuntimeQuest.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::QuestsController {
    IL2CPP_REGISTER_METHOD(0x00E8D950, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::RuntimeQuest*, get_ActiveRuntimeQuest, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_ActiveRuntimeQuest, app::QuestsController* this_ptr, app::RuntimeQuest* value)
    IL2CPP_REGISTER_METHOD(0x00E8D9E0, app::Quest*, get_ActiveQuest, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8DA00, float, GetSideQuestCompletion, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8DC40, void, OnDestroy, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8DDE0, void, OnRestoreCheckpoint, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8DF40, void, Awake, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8F0B0, void, Update, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8F8C0, void, DebugClearQueue, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8F9A0, app::Quest*, GetQuestByName, app::QuestsController* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x00E8FB00,
        bool,
        TryGetRootQuestByUberState,
        app::QuestsController* this_ptr,
        app::IGenericUberState* uber_state,
        app::Quest** quest
    )
    IL2CPP_REGISTER_METHOD(
        0x00E8FC20,
        bool,
        TryRemapStateToQuestIndex,
        app::QuestsController* this_ptr,
        app::SerializedIntUberState* uber_state,
        int32_t state_value,
        int32_t* quest_index
    )
    IL2CPP_REGISTER_METHOD(0x00E8FDD0, bool, get_WaitingToDisplayMessage, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_MessageVisible, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8FE60, void, MessageHidden, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E90010, void, QueueMessage, app::QuestsController* this_ptr, app::Quest* quest)
    IL2CPP_REGISTER_METHOD(0x00E900D0, void, ShowMessage, app::QuestsController* this_ptr, app::Quest* quest)
    IL2CPP_REGISTER_METHOD(0x00E90310, void, QueueCompleteMessage, app::QuestsController* this_ptr, app::Quest* quest)
    IL2CPP_REGISTER_METHOD(0x00E903D0, void, QueueRewardMessage, app::QuestsController* this_ptr, app::Quest* quest)
    IL2CPP_REGISTER_METHOD(0x00E90490, void, ShowCompleteMessage, app::QuestsController* this_ptr, app::Quest* quest)
    IL2CPP_REGISTER_METHOD(0x00E906D0, void, ApplyReward, app::QuestsController* this_ptr, app::QuestReward* reward)
    IL2CPP_REGISTER_METHOD(0x00E908A0, void, ShowReward, app::QuestsController* this_ptr, app::QuestReward* reward)
    IL2CPP_REGISTER_METHOD(0x00E90A10, void, QueueUpdatedMessage, app::QuestsController* this_ptr, app::Quest* quest)
    IL2CPP_REGISTER_METHOD(0x00E90AD0, void, ShowUpdatedMessage, app::QuestsController* this_ptr, app::Quest* quest)
    IL2CPP_REGISTER_METHOD(0x00E90D10, void, HideCurrentMessage, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00E90E00,
        void,
        AssignQuest,
        app::QuestsController* this_ptr,
        app::Quest* quest,
        bool with_message,
        bool updated,
        bool set_as_active
    )
    IL2CPP_REGISTER_METHOD(0x00E914F0, void, CompleteQuest, app::QuestsController* this_ptr, app::Quest* quest)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CreateCheckpoint, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E91BF0, void, AutoPickNewQuest, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E91D60, void, SetActiveQuest, app::QuestsController* this_ptr, app::RuntimeQuest* runtime_quest, bool with_sound)
    IL2CPP_REGISTER_METHOD(0x00E8D9E0, app::Quest*, GetActiveQuest, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::RuntimeQuest*, GetActiveRuntimeQuest, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E91F80, app::RuntimeQuest*, GetRuntimeQuest, app::QuestsController* this_ptr, app::Quest* quest)
    IL2CPP_REGISTER_METHOD(0x00E92070, app::List_1_RuntimeQuest_*, GetQuests, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E92110, app::Quest*, GetQuestFromRuntimeQuest, app::QuestsController* this_ptr, app::RuntimeQuest* runtime_quest)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E92310, void, Apply_1, app::QuestsController* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::IUberState__Array*, get_AffectingUberStates, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E924C0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E92680, void, Apply_2, app::QuestsController* this_ptr, app::Quest* quest, bool full_state_apply)
    IL2CPP_REGISTER_METHOD(0x00E92750, void, ProcessQuest, app::QuestsController* this_ptr, app::Quest* quest, bool full_state_apply)
    IL2CPP_REGISTER_METHOD(0x00E92AF0, void, GetQuestItemReward, app::QuestsController* this_ptr, app::QuestItemReward* quest_item_reward)
    IL2CPP_REGISTER_METHOD(0x00E92E80, void, OnGetQuestItemRewardFinished, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E930B0, bool, IsShowingMessage, app::QuestsController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E93150, void, ctor, app::QuestsController* this_ptr)
} // namespace app::classes::QuestsController
