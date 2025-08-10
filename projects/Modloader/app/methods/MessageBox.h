#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_MessageBox_HideAction_.h>
#include <Modloader/app/structs/EmotionType__Enum.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/Language__Enum.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PickupContext.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/QuestMessageIcon_QuestMode__Enum.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WispMessageIcon_Wisp__Enum.h>

namespace app::classes::MessageBox {
    IL2CPP_REGISTER_METHOD(0x0158DA80, app::HashSet_1_Moon_ISuspendable_*, GetSuspendables, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::SoundHost*, get_SoundHost, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_SoundHost, app::MessageBox* this_ptr, app::SoundHost* value)
    IL2CPP_REGISTER_METHOD(0x0158DCE0, void, add_OnMessageScreenHide, app::MessageBox* this_ptr, app::Action_1_MessageBox_HideAction_* value)
    IL2CPP_REGISTER_METHOD(0x0158DDD0, void, remove_OnMessageScreenHide, app::MessageBox* this_ptr, app::Action_1_MessageBox_HideAction_* value)
    IL2CPP_REGISTER_METHOD(0x0158DEC0, void, add_OnNextMessage, app::MessageBox* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x0158DFB0, void, remove_OnNextMessage, app::MessageBox* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x0158E0A0, void, add_OnMessageDestroyed, app::MessageBox* this_ptr, app::Action_1_MessageBox_HideAction_* value)
    IL2CPP_REGISTER_METHOD(0x0158E190, void, remove_OnMessageDestroyed, app::MessageBox* this_ptr, app::Action_1_MessageBox_HideAction_* value)
    IL2CPP_REGISTER_METHOD(0x0158E280, void, OverrideLanuage, app::MessageBox* this_ptr, app::Language__Enum language)
    IL2CPP_REGISTER_METHOD(0x0158E290, void, SetAvatar, app::MessageBox* this_ptr, app::GameObject* avatar_prefab)
    IL2CPP_REGISTER_METHOD(0x0158E850, void, SetQuest, app::MessageBox* this_ptr, app::Quest* quest, app::QuestMessageIcon_QuestMode__Enum quest_mode)
    IL2CPP_REGISTER_METHOD(0x0158E980, void, SetWisp, app::MessageBox* this_ptr, app::WispMessageIcon_Wisp__Enum wisp)
    IL2CPP_REGISTER_METHOD(0x0158EC10, void, SetAbility, app::MessageBox* this_ptr, app::EquipmentType__Enum ability)
    IL2CPP_REGISTER_METHOD(0x0158EFF0, void, SetShard, app::MessageBox* this_ptr, app::SpiritShardType__Enum shard)
    IL2CPP_REGISTER_METHOD(0x0158F350, void, SetPickup, app::MessageBox* this_ptr, app::PickupContext* context)
    IL2CPP_REGISTER_METHOD(0x0158F490, void, SetRaceData, app::MessageBox* this_ptr, float elapsed_time, bool show_trial_reward)
    IL2CPP_REGISTER_METHOD(0x002FBD50, void, SetAvatarArray, app::MessageBox* this_ptr, app::GameObject__Array* avatar_prefabs)
    IL2CPP_REGISTER_METHOD(0x0158F5E0, void, HideMessageScreenImmediately, app::MessageBox* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x0158F730, void, HideMessageScreen, app::MessageBox* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x0158F890, void, ShowHidables, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0158F990, void, Awake, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0158FD00, void, OnDestroy, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01590040, void, Update, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01590130, void, RemoveMessageFade, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01590140, void, SetMessageFade, app::MessageBox* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(
        0x015908C0,
        void,
        SetMessage,
        app::MessageBox* this_ptr,
        app::MessageDescriptor message_descriptor,
        app::String* replace,
        app::String* with
    )
    IL2CPP_REGISTER_METHOD(0x01590A00, void, RefreshText_1, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01590AB0, void, RefreshText_2, app::MessageBox* this_ptr, app::String* replace, app::String* with)
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnEnable, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01591640,
        void,
        SetMessageProvider,
        app::MessageBox* this_ptr,
        app::MessageProvider* message_provider,
        app::String* replace,
        app::String* with
    )
    IL2CPP_REGISTER_METHOD(0x01591660, int32_t, get_MessageCount, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D28C50, void, SetWaitDuration, app::MessageBox* this_ptr, float duration)
    IL2CPP_REGISTER_METHOD(0x01591680, bool, HasFiniteDuration, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBC0, app::String*, get_CurrentMessage, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01202580, app::EmotionType__Enum, get_CurrentEmotion, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005FDE00, app::Event_1*, get_CurrentMessageSound, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01591690, void, FinishWriting, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01591890, bool, get_IsLastMessage, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015918C0, bool, get_FinishedWriting, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015919D0, void, NextMessage, app::MessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01591B50, app::String*, GetPercentage, )
    IL2CPP_REGISTER_METHOD(0x01591CE0, bool, ShouldAddSpaceBeforePercentage, )
    IL2CPP_REGISTER_METHOD(0x01591E00, void, ctor, app::MessageBox* this_ptr)
} // namespace app::classes::MessageBox
