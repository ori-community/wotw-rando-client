#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/CSteamID__Array.h>
#include <Modloader/app/structs/EActivateGameOverlayToWebPageMode__Enum.h>
#include <Modloader/app/structs/EChatEntryType__Enum.h>
#include <Modloader/app/structs/EFriendFlags__Enum.h>
#include <Modloader/app/structs/EFriendRelationship__Enum.h>
#include <Modloader/app/structs/EOverlayToStoreFlag__Enum.h>
#include <Modloader/app/structs/EPersonaState__Enum.h>
#include <Modloader/app/structs/FriendGameInfo_t.h>
#include <Modloader/app/structs/FriendsGroupID_t.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamFriends {
    IL2CPP_REGISTER_METHOD(0x027E9BB0, app::String*, GetPersonaName, )
    IL2CPP_REGISTER_METHOD(0x027E9C60, app::SteamAPICall_t, SetPersonaName, app::String* pch_persona_name)
    IL2CPP_REGISTER_METHOD(0x027E9F60, app::EPersonaState__Enum, GetPersonaState, )
    IL2CPP_REGISTER_METHOD(0x027EA010, int32_t, GetFriendCount, app::EFriendFlags__Enum i_friend_flags)
    IL2CPP_REGISTER_METHOD(0x027EA0C0, app::CSteamID, GetFriendByIndex, int32_t i_friend, app::EFriendFlags__Enum i_friend_flags)
    IL2CPP_REGISTER_METHOD(0x027EA210, app::EFriendRelationship__Enum, GetFriendRelationship, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x027EA2D0, app::EPersonaState__Enum, GetFriendPersonaState, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x027EA390, app::String*, GetFriendPersonaName, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x027EA450, bool, GetFriendGamePlayed, app::CSteamID steam_i_d_friend, app::FriendGameInfo_t* p_friend_game_info)
    IL2CPP_REGISTER_METHOD(0x027EA520, app::String*, GetFriendPersonaNameHistory, app::CSteamID steam_i_d_friend, int32_t i_persona_name)
    IL2CPP_REGISTER_METHOD(0x027EA5F0, int32_t, GetFriendSteamLevel, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x027EA6B0, app::String*, GetPlayerNickname, app::CSteamID steam_i_d_player)
    IL2CPP_REGISTER_METHOD(0x027EA770, int32_t, GetFriendsGroupCount, )
    IL2CPP_REGISTER_METHOD(0x027EA820, app::FriendsGroupID_t, GetFriendsGroupIDByIndex, int32_t i_f_g)
    IL2CPP_REGISTER_METHOD(0x027EA960, app::String*, GetFriendsGroupName, app::FriendsGroupID_t friends_group_i_d)
    IL2CPP_REGISTER_METHOD(0x027EAA20, int32_t, GetFriendsGroupMembersCount, app::FriendsGroupID_t friends_group_i_d)
    IL2CPP_REGISTER_METHOD(
        0x027EAAE0,
        void,
        GetFriendsGroupMembersList,
        app::FriendsGroupID_t friends_group_i_d,
        app::CSteamID__Array* p_out_steam_i_d_members,
        int32_t n_members_count
    )
    IL2CPP_REGISTER_METHOD(0x027EABC0, bool, HasFriend, app::CSteamID steam_i_d_friend, app::EFriendFlags__Enum i_friend_flags)
    IL2CPP_REGISTER_METHOD(0x027EAC90, int32_t, GetClanCount, )
    IL2CPP_REGISTER_METHOD(0x027EAD40, app::CSteamID, GetClanByIndex, int32_t i_clan)
    IL2CPP_REGISTER_METHOD(0x027EAE80, app::String*, GetClanName, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x027EAF40, app::String*, GetClanTag, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x027EB000, bool, GetClanActivityCounts, app::CSteamID steam_i_d_clan, int32_t* pn_online, int32_t* pn_in_game, int32_t* pn_chatting)
    IL2CPP_REGISTER_METHOD(0x027EB0F0, app::SteamAPICall_t, DownloadClanActivityCounts, app::CSteamID__Array* psteam_i_d_clans, int32_t c_clans_to_request)
    IL2CPP_REGISTER_METHOD(0x027EB250, int32_t, GetFriendCountFromSource, app::CSteamID steam_i_d_source)
    IL2CPP_REGISTER_METHOD(0x027EB310, app::CSteamID, GetFriendFromSourceByIndex, app::CSteamID steam_i_d_source, int32_t i_friend)
    IL2CPP_REGISTER_METHOD(0x027EB460, bool, IsUserInSource, app::CSteamID steam_i_d_user, app::CSteamID steam_i_d_source)
    IL2CPP_REGISTER_METHOD(0x027EB530, void, SetInGameVoiceSpeaking, app::CSteamID steam_i_d_user, bool b_speaking)
    IL2CPP_REGISTER_METHOD(0x027EB600, void, ActivateGameOverlay, app::String* pch_dialog)
    IL2CPP_REGISTER_METHOD(0x027EB8C0, void, ActivateGameOverlayToUser, app::String* pch_dialog, app::CSteamID steam_i_d)
    IL2CPP_REGISTER_METHOD(0x027EBBA0, void, ActivateGameOverlayToWebPage, app::String* pch_u_r_l, app::EActivateGameOverlayToWebPageMode__Enum e_mode)
    IL2CPP_REGISTER_METHOD(0x027EBE80, void, ActivateGameOverlayToStore, app::AppId_t n_app_i_d, app::EOverlayToStoreFlag__Enum e_flag)
    IL2CPP_REGISTER_METHOD(0x027EBF40, void, SetPlayedWith, app::CSteamID steam_i_d_user_played_with)
    IL2CPP_REGISTER_METHOD(0x027EC000, void, ActivateGameOverlayInviteDialog, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(0x027EC0C0, int32_t, GetSmallFriendAvatar, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x027EC180, int32_t, GetMediumFriendAvatar, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x027EC240, int32_t, GetLargeFriendAvatar, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x027EC300, bool, RequestUserInformation, app::CSteamID steam_i_d_user, bool b_require_name_only)
    IL2CPP_REGISTER_METHOD(0x027EC3D0, app::SteamAPICall_t, RequestClanOfficerList, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x027EC510, app::CSteamID, GetClanOwner, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x027EC650, int32_t, GetClanOfficerCount, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x027EC710, app::CSteamID, GetClanOfficerByIndex, app::CSteamID steam_i_d_clan, int32_t i_officer)
    IL2CPP_REGISTER_METHOD(0x027EC860, uint32_t, GetUserRestrictions, )
    IL2CPP_REGISTER_METHOD(0x027EC910, bool, SetRichPresence, app::String* pch_key, app::String* pch_value)
    IL2CPP_REGISTER_METHOD(0x027ECD60, void, ClearRichPresence, )
    IL2CPP_REGISTER_METHOD(0x027ECE10, app::String*, GetFriendRichPresence, app::CSteamID steam_i_d_friend, app::String* pch_key)
    IL2CPP_REGISTER_METHOD(0x027ED100, int32_t, GetFriendRichPresenceKeyCount, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x027ED1C0, app::String*, GetFriendRichPresenceKeyByIndex, app::CSteamID steam_i_d_friend, int32_t i_key)
    IL2CPP_REGISTER_METHOD(0x027ED290, void, RequestFriendRichPresence, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x027ED350, bool, InviteUserToGame, app::CSteamID steam_i_d_friend, app::String* pch_connect_string)
    IL2CPP_REGISTER_METHOD(0x027ED640, int32_t, GetCoplayFriendCount, )
    IL2CPP_REGISTER_METHOD(0x027ED6F0, app::CSteamID, GetCoplayFriend, int32_t i_coplay_friend)
    IL2CPP_REGISTER_METHOD(0x027ED830, int32_t, GetFriendCoplayTime, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x027ED8F0, app::AppId_t, GetFriendCoplayGame, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x027EDA30, app::SteamAPICall_t, JoinClanChatRoom, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x027EDB70, bool, LeaveClanChatRoom, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x027EDC30, int32_t, GetClanChatMemberCount, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x027EDCF0, app::CSteamID, GetChatMemberByIndex, app::CSteamID steam_i_d_clan, int32_t i_user)
    IL2CPP_REGISTER_METHOD(0x027EDE40, bool, SendClanChatMessage, app::CSteamID steam_i_d_clan_chat, app::String* pch_text)
    IL2CPP_REGISTER_METHOD(
        0x027EE130,
        int32_t,
        GetClanChatMessage,
        app::CSteamID steam_i_d_clan_chat,
        int32_t i_message,
        app::String** prgch_text,
        int32_t cch_text_max,
        app::EChatEntryType__Enum* pe_chat_entry_type,
        app::CSteamID* psteamid_chatter
    )
    IL2CPP_REGISTER_METHOD(0x027EE310, bool, IsClanChatAdmin, app::CSteamID steam_i_d_clan_chat, app::CSteamID steam_i_d_user)
    IL2CPP_REGISTER_METHOD(0x027EE3E0, bool, IsClanChatWindowOpenInSteam, app::CSteamID steam_i_d_clan_chat)
    IL2CPP_REGISTER_METHOD(0x027EE4A0, bool, OpenClanChatWindowInSteam, app::CSteamID steam_i_d_clan_chat)
    IL2CPP_REGISTER_METHOD(0x027EE560, bool, CloseClanChatWindowInSteam, app::CSteamID steam_i_d_clan_chat)
    IL2CPP_REGISTER_METHOD(0x027EE620, bool, SetListenForFriendsMessages, bool b_intercept_enabled)
    IL2CPP_REGISTER_METHOD(0x027EE6E0, bool, ReplyToFriendMessage, app::CSteamID steam_i_d_friend, app::String* pch_msg_to_send)
    IL2CPP_REGISTER_METHOD(
        0x027EE9D0,
        int32_t,
        GetFriendMessage,
        app::CSteamID steam_i_d_friend,
        int32_t i_message_i_d,
        app::String** pv_data,
        int32_t cub_data,
        app::EChatEntryType__Enum* pe_chat_entry_type
    )
    IL2CPP_REGISTER_METHOD(0x027EEBA0, app::SteamAPICall_t, GetFollowerCount, app::CSteamID steam_i_d)
    IL2CPP_REGISTER_METHOD(0x027EECE0, app::SteamAPICall_t, IsFollowing, app::CSteamID steam_i_d)
    IL2CPP_REGISTER_METHOD(0x027EEE20, app::SteamAPICall_t, EnumerateFollowingList, uint32_t un_start_index)
    IL2CPP_REGISTER_METHOD(0x027EEF60, bool, IsClanPublic, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x027EF020, bool, IsClanOfficialGameGroup, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x027EF0E0, int32_t, GetNumChatsWithUnreadPriorityMessages, )
} // namespace app::classes::Steamworks::SteamFriends
