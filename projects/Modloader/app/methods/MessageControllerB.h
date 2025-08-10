#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/InteractionSettings.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>
#include <Modloader/app/structs/MessageControllerB.h>
#include <Modloader/app/structs/MessageControllerB_NpcMessageStyle__Enum.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/PickupContext.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity_TextVisuals.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextBox.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WispMessageIcon_Wisp__Enum.h>

namespace app::classes::MessageControllerB {
    IL2CPP_REGISTER_METHOD(0x01202300, bool, get_LastMessageWasShard, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01202310, void, set_LastMessageWasShard, app::MessageControllerB* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01202540, bool, get_LastMessageWasQuest, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01202550, void, set_LastMessageWasQuest, app::MessageControllerB* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0065FBE0, app::Quest*, get_LastQuest, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBF0, void, set_LastQuest, app::MessageControllerB* this_ptr, app::Quest* value)
    IL2CPP_REGISTER_METHOD(0x0068B8C0, app::SpiritShardType__Enum, get_LastShard, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00757000, void, set_LastShard, app::MessageControllerB* this_ptr, app::SpiritShardType__Enum value)
    IL2CPP_REGISTER_METHOD(0x01594A30, void, Awake, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01594DD0, void, OnDestroy, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01594EF0, bool, get_AnyAbilityPickupStoryMessagesVisible, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01595030, bool, get_AllowMenu, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01595180, bool, get_AllowAchievementPopup, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x015952C0,
        app::GameObject*,
        ShowMessageBox_1,
        app::MessageControllerB* this_ptr,
        app::GameObject* message_box_prefab,
        app::MessageProvider* message_provider,
        app::Vector3 position,
        float duration,
        app::String* replace,
        app::String* with,
        bool is_interactive,
        int32_t start_id,
        int32_t end_id,
        bool lock_input,
        bool write_out_text
    )
    IL2CPP_REGISTER_METHOD(
        0x01595580,
        app::GameObject*,
        ShowMessageBox_2,
        app::MessageControllerB* this_ptr,
        app::GameObject* message_box_prefab,
        app::MessageDescriptor message,
        app::Vector3 position,
        float duration,
        app::String* replace,
        app::String* with
    )
    IL2CPP_REGISTER_METHOD(
        0x01595770,
        app::MessageBox*,
        ShowRaceFinishMessage,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::Vector3 position,
        float elapsed_time,
        float duration,
        bool show_reward
    )
    IL2CPP_REGISTER_METHOD(
        0x01595A40,
        app::MessageBox*,
        ShowHintMessage_1,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::Vector3 position,
        float duration
    )
    IL2CPP_REGISTER_METHOD(
        0x01595BB0,
        app::MessageBox*,
        ShowHintMessage_2,
        app::MessageControllerB* this_ptr,
        app::MessageDescriptor descriptor,
        app::Vector3 position,
        float duration
    )
    IL2CPP_REGISTER_METHOD(
        0x01595D10,
        app::MessageBox*,
        ShowHintSmallMessage_1,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::Vector3 position,
        float duration
    )
    IL2CPP_REGISTER_METHOD(
        0x01595E80,
        app::MessageBox*,
        ShowHintSmallMessage_2,
        app::MessageControllerB* this_ptr,
        app::MessageDescriptor descriptor,
        app::Vector3 position,
        float duration
    )
    IL2CPP_REGISTER_METHOD(
        0x01595FE0,
        app::MessageBox*,
        ShowBottomHintMessage,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::Vector3 position,
        float duration
    )
    IL2CPP_REGISTER_METHOD(
        0x01596150,
        app::MessageBox*,
        ShowMessageBoxB,
        app::MessageControllerB* this_ptr,
        app::GameObject* message_box_prefab,
        app::MessageProvider* message_provider,
        app::Vector3 position,
        float duration,
        app::String* replace,
        app::String* with,
        bool is_interactive,
        int32_t start_id,
        int32_t end_id,
        bool lock_input,
        bool write_out_text
    )
    IL2CPP_REGISTER_METHOD(0x015962E0, app::MessageBox*, ShowAreaMessage_1, app::MessageControllerB* this_ptr, app::MessageProvider* message_provider)
    IL2CPP_REGISTER_METHOD(
        0x01596470,
        app::MessageBox*,
        ShowAreaMessage_2,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        float duration
    )
    IL2CPP_REGISTER_METHOD(0x01596600, app::MessageBox*, ShowUrlAndCodeMessage, app::MessageControllerB* this_ptr, app::MessageProvider* message_provider)
    IL2CPP_REGISTER_METHOD(
        0x01596770,
        app::MessageBox*,
        ShowAbilityMessage,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::EquipmentType__Enum ability
    )
    IL2CPP_REGISTER_METHOD(
        0x015969B0,
        app::MessageBox*,
        ShowPickupMessage,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::PickupContext* context,
        bool lock_input
    )
    IL2CPP_REGISTER_METHOD(
        0x01596CD0,
        app::MessageBox*,
        ShowShardMessage,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::GameObject* avatar,
        app::SpiritShardType__Enum shard_type
    )
    IL2CPP_REGISTER_METHOD(0x01597090, void, StopOpeningShardWindow, app::MessageControllerB* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x015974E0, void, StopOpeningQuestWindow, app::MessageControllerB* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(
        0x01597930,
        app::MessageBox*,
        ShowSpellMessage,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::EquipmentType__Enum ability
    )
    IL2CPP_REGISTER_METHOD(
        0x01597B10,
        app::MessageBox*,
        ShowQuestMessage,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::Quest* quest
    )
    IL2CPP_REGISTER_METHOD(
        0x01597F10,
        app::MessageBox*,
        ShowCompleteQuestMessage,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::Quest* quest
    )
    IL2CPP_REGISTER_METHOD(
        0x01598120,
        app::MessageBox*,
        ShowUpdatedQuestMessage,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::Quest* quest
    )
    IL2CPP_REGISTER_METHOD(0x01598530, app::MessageBox*, ShowStoryMessage, app::MessageControllerB* this_ptr, app::MessageProvider* message_provider)
    IL2CPP_REGISTER_METHOD(
        0x015986C0,
        app::GameObject*,
        GetMessageScreenPrefab,
        app::MessageControllerB* this_ptr,
        app::MessageControllerB_NpcMessageStyle__Enum style
    )
    IL2CPP_REGISTER_METHOD(
        0x015987E0,
        app::ShowFixedTimeTextEntity_TextVisuals*,
        CacheVisuals,
        app::MessageControllerB* this_ptr,
        app::Transform* message_screen,
        app::Transform* story_message,
        app::Transform* box_group,
        app::TextBox* text,
        app::MessageControllerB_NpcMessageStyle__Enum style
    )
    IL2CPP_REGISTER_METHOD(
        0x01598CA0,
        void,
        UpdateVisuals,
        app::MessageControllerB* this_ptr,
        app::MessageControllerB_NpcMessageStyle__Enum style,
        app::ShowFixedTimeTextEntity_TextVisuals* visuals,
        app::Transform* message_screen,
        app::Transform* story_message,
        app::Transform* screen_box_group,
        app::Transform* message_box_group,
        app::TextBox* text
    )
    IL2CPP_REGISTER_METHOD(0x015992D0, void, HideNPCMessageScreen_1, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01599340, void, HideNPCMessageScreen_2, app::MessageControllerB* this_ptr, app::MessageControllerB_NpcMessageStyle__Enum style)
    IL2CPP_REGISTER_METHOD(0x015993F0, void, HideNPCMessageScreenHidables, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01599550, void, ShowNPCMessageScreenHidables, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x015996B0,
        app::GameObject*,
        GetStoryMessagePrefab,
        app::MessageControllerB* this_ptr,
        app::MessageControllerB_NpcMessageStyle__Enum style
    )
    IL2CPP_REGISTER_METHOD(0x015997D0, void, HideHidables, app::MessageBox* screen)
    IL2CPP_REGISTER_METHOD(0x01599940, void, ShowHidables, app::MessageControllerB* this_ptr, app::MessageBox* screen)
    IL2CPP_REGISTER_METHOD(
        0x01599A50,
        app::MessageBox*,
        ShowNPCStoryMessage,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::String* replace,
        app::String* with,
        app::MessageControllerB_NpcMessageStyle__Enum message_style,
        float duration,
        bool is_interactive,
        int32_t start_id,
        int32_t end_id,
        bool lock_input,
        app::ShowFixedTimeTextEntity_TextVisuals* visuals
    )
    IL2CPP_REGISTER_METHOD(
        0x0159A370,
        app::MessageBox*,
        ShowNPCInteractionMessage,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::InteractionSettings* interaction_settings,
        app::String* replace,
        app::String* with,
        float duration,
        bool is_interactive,
        int32_t start_id,
        int32_t end_id,
        bool lock_input
    )
    IL2CPP_REGISTER_METHOD(
        0x0159A610,
        app::MessageBox*,
        ShowHelpMessage,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::GameObject* avatar
    )
    IL2CPP_REGISTER_METHOD(
        0x0159A820,
        app::GameObject*,
        ShowSpiritTreeTextMessage,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::Vector3 position
    )
    IL2CPP_REGISTER_METHOD(0x0159A930, void, HideCurrentMessageImmediately, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0159AB70,
        app::MessageBox*,
        ShowAchievementMessageBox,
        app::MessageControllerB* this_ptr,
        app::MessageProvider* message_provider,
        app::Texture* icon
    )
    IL2CPP_REGISTER_METHOD(0x0159AE90, app::MessageBox*, ShowWispMessage, app::MessageControllerB* this_ptr, app::WispMessageIcon_Wisp__Enum wisp)
    IL2CPP_REGISTER_METHOD(0x0159B080, void, ctor, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B1960, void, _StopOpeningShardWindow_b__73_0, app::MessageControllerB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0159B150, void, _StopOpeningQuestWindow_b__74_0, app::MessageControllerB* this_ptr)
} // namespace app::classes::MessageControllerB
