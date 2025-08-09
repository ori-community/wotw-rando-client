#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/NPCEntity.h>
#include <Modloader/app/structs/NPCEventTriggerAnimator.h>
#include <Modloader/app/structs/QuestNodeWisps.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::QuestNodeWisps {
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::MoonTimeline*, get_IntroTimeline, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_IntroTimeline, app::QuestNodeWisps* this_ptr, app::MoonTimeline* value)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::MoonTimeline*, get_TalkTimeline, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_TalkTimeline, app::QuestNodeWisps* this_ptr, app::MoonTimeline* value)
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::MoonTimeline*, get_RewardTimeline, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_RewardTimeline, app::QuestNodeWisps* this_ptr, app::MoonTimeline* value)
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::NPCEventTriggerAnimator*, get_ShowRewardTrigger, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_ShowRewardTrigger, app::QuestNodeWisps* this_ptr, app::NPCEventTriggerAnimator* value)
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::NPCEventTriggerAnimator*, get_ThrowRewardTrigger, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_ThrowRewardTrigger, app::QuestNodeWisps* this_ptr, app::NPCEventTriggerAnimator* value)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::NPCEventTriggerAnimator*, get_CollectRewardTrigger, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_CollectRewardTrigger, app::QuestNodeWisps* this_ptr, app::NPCEventTriggerAnimator* value)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::NPCEntity*, get_NpcEntity, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_NpcEntity, app::QuestNodeWisps* this_ptr, app::NPCEntity* value)
    IL2CPP_REGISTER_METHOD(0x009ED350, bool, get_IsActive, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8BDE0, app::Transform*, get_RewardPrefab, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8BE00, app::MessageProvider*, get_CurrentLine, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8BE20, void, Awake, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8C0B0, void, SelectInteraction, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8C540, void, UpdateRewardState, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8CA20, void, OnEnter, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8CAC0, bool, Interact, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8CC80, void, ApplyReward, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8D180, void, StartTimeline, app::QuestNodeWisps* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00E8D350, void, TimelineFinished, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8D580, void, StartReward, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8D830, void, EndInteraction, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E8D910, void, GotQuestItemReward, app::QuestNodeWisps* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0056FAC0, void, ctor, app::QuestNodeWisps* this_ptr)
} // namespace app::classes::QuestNodeWisps
