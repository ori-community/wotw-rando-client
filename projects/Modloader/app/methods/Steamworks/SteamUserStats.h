#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/CSteamID__Array.h>
#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/ELeaderboardDataRequest__Enum.h>
#include <Modloader/app/structs/ELeaderboardDisplayType__Enum.h>
#include <Modloader/app/structs/ELeaderboardSortMethod__Enum.h>
#include <Modloader/app/structs/ELeaderboardUploadScoreMethod__Enum.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Int64__Array.h>
#include <Modloader/app/structs/LeaderboardEntry_t.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/SteamLeaderboardEntries_t.h>
#include <Modloader/app/structs/SteamLeaderboard_t.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UGCHandle_t.h>

namespace app::classes::Steamworks::SteamUserStats {
    IL2CPP_REGISTER_METHOD(0x0279F9D0, bool, RequestCurrentStats, )
    IL2CPP_REGISTER_METHOD(0x0279FA80, bool, GetStat_1, app::String* pch_name, int32_t* p_data)
    IL2CPP_REGISTER_METHOD(0x0279FD70, bool, GetStat_2, app::String* pch_name, float* p_data)
    IL2CPP_REGISTER_METHOD(0x027A0060, bool, SetStat_1, app::String* pch_name, int32_t n_data)
    IL2CPP_REGISTER_METHOD(0x027A0350, bool, SetStat_2, app::String* pch_name, float f_data)
    IL2CPP_REGISTER_METHOD(0x027A0640, bool, UpdateAvgRateStat, app::String* pch_name, float fl_count_this_session, double d_session_length)
    IL2CPP_REGISTER_METHOD(0x027A0950, bool, GetAchievement, app::String* pch_name, bool* pb_achieved)
    IL2CPP_REGISTER_METHOD(0x027A0C50, bool, SetAchievement, app::String* pch_name)
    IL2CPP_REGISTER_METHOD(0x027A0F30, bool, ClearAchievement, app::String* pch_name)
    IL2CPP_REGISTER_METHOD(0x027A1210, bool, GetAchievementAndUnlockTime, app::String* pch_name, bool* pb_achieved, uint32_t* pun_unlock_time)
    IL2CPP_REGISTER_METHOD(0x027A1520, bool, StoreStats, )
    IL2CPP_REGISTER_METHOD(0x027A15D0, int32_t, GetAchievementIcon, app::String* pch_name)
    IL2CPP_REGISTER_METHOD(0x027A18B0, app::String*, GetAchievementDisplayAttribute, app::String* pch_name, app::String* pch_key)
    IL2CPP_REGISTER_METHOD(0x027A1D10, bool, IndicateAchievementProgress, app::String* pch_name, uint32_t n_cur_progress, uint32_t n_max_progress)
    IL2CPP_REGISTER_METHOD(0x027A2010, uint32_t, GetNumAchievements, )
    IL2CPP_REGISTER_METHOD(0x027A20C0, app::String*, GetAchievementName, uint32_t i_achievement)
    IL2CPP_REGISTER_METHOD(0x027A2180, app::SteamAPICall_t, RequestUserStats, app::CSteamID steam_i_d_user)
    IL2CPP_REGISTER_METHOD(0x027A22C0, bool, GetUserStat_1, app::CSteamID steam_i_d_user, app::String* pch_name, int32_t* p_data)
    IL2CPP_REGISTER_METHOD(0x027A25C0, bool, GetUserStat_2, app::CSteamID steam_i_d_user, app::String* pch_name, float* p_data)
    IL2CPP_REGISTER_METHOD(0x027A28C0, bool, GetUserAchievement, app::CSteamID steam_i_d_user, app::String* pch_name, bool* pb_achieved)
    IL2CPP_REGISTER_METHOD(
        0x027A2BD0,
        bool,
        GetUserAchievementAndUnlockTime,
        app::CSteamID steam_i_d_user,
        app::String* pch_name,
        bool* pb_achieved,
        uint32_t* pun_unlock_time
    )
    IL2CPP_REGISTER_METHOD(0x027A2ED0, bool, ResetAllStats, bool b_achievements_too)
    IL2CPP_REGISTER_METHOD(
        0x027A2F90,
        app::SteamAPICall_t,
        FindOrCreateLeaderboard,
        app::String* pch_leaderboard_name,
        app::ELeaderboardSortMethod__Enum e_leaderboard_sort_method,
        app::ELeaderboardDisplayType__Enum e_leaderboard_display_type
    )
    IL2CPP_REGISTER_METHOD(0x027A32B0, app::SteamAPICall_t, FindLeaderboard, app::String* pch_leaderboard_name)
    IL2CPP_REGISTER_METHOD(0x027A35B0, app::String*, GetLeaderboardName, app::SteamLeaderboard_t h_steam_leaderboard)
    IL2CPP_REGISTER_METHOD(0x027A3670, int32_t, GetLeaderboardEntryCount, app::SteamLeaderboard_t h_steam_leaderboard)
    IL2CPP_REGISTER_METHOD(0x027A3730, app::ELeaderboardSortMethod__Enum, GetLeaderboardSortMethod, app::SteamLeaderboard_t h_steam_leaderboard)
    IL2CPP_REGISTER_METHOD(0x027A37F0, app::ELeaderboardDisplayType__Enum, GetLeaderboardDisplayType, app::SteamLeaderboard_t h_steam_leaderboard)
    IL2CPP_REGISTER_METHOD(
        0x027A38B0,
        app::SteamAPICall_t,
        DownloadLeaderboardEntries,
        app::SteamLeaderboard_t h_steam_leaderboard,
        app::ELeaderboardDataRequest__Enum e_leaderboard_data_request,
        int32_t n_range_start,
        int32_t n_range_end
    )
    IL2CPP_REGISTER_METHOD(
        0x027A3A20,
        app::SteamAPICall_t,
        DownloadLeaderboardEntriesForUsers,
        app::SteamLeaderboard_t h_steam_leaderboard,
        app::CSteamID__Array* prg_users,
        int32_t c_users
    )
    IL2CPP_REGISTER_METHOD(
        0x027A3B90,
        bool,
        GetDownloadedLeaderboardEntry,
        app::SteamLeaderboardEntries_t h_steam_leaderboard_entries,
        int32_t index,
        app::LeaderboardEntry_t* p_leaderboard_entry,
        app::Int32__Array* p_details,
        int32_t c_details_max
    )
    IL2CPP_REGISTER_METHOD(
        0x027A3CA0,
        app::SteamAPICall_t,
        UploadLeaderboardScore,
        app::SteamLeaderboard_t h_steam_leaderboard,
        app::ELeaderboardUploadScoreMethod__Enum e_leaderboard_upload_score_method,
        int32_t n_score,
        app::Int32__Array* p_score_details,
        int32_t c_score_details_count
    )
    IL2CPP_REGISTER_METHOD(0x027A3E20, app::SteamAPICall_t, AttachLeaderboardUGC, app::SteamLeaderboard_t h_steam_leaderboard, app::UGCHandle_t h_u_g_c)
    IL2CPP_REGISTER_METHOD(0x027A3F70, app::SteamAPICall_t, GetNumberOfCurrentPlayers, )
    IL2CPP_REGISTER_METHOD(0x027A40A0, app::SteamAPICall_t, RequestGlobalAchievementPercentages, )
    IL2CPP_REGISTER_METHOD(
        0x027A41D0,
        int32_t,
        GetMostAchievedAchievementInfo,
        app::String** pch_name,
        uint32_t un_name_buf_len,
        float* pfl_percent,
        bool* pb_achieved
    )
    IL2CPP_REGISTER_METHOD(
        0x027A43A0,
        int32_t,
        GetNextMostAchievedAchievementInfo,
        int32_t i_iterator_previous,
        app::String** pch_name,
        uint32_t un_name_buf_len,
        float* pfl_percent,
        bool* pb_achieved
    )
    IL2CPP_REGISTER_METHOD(0x027A4580, bool, GetAchievementAchievedPercent, app::String* pch_name, float* pfl_percent)
    IL2CPP_REGISTER_METHOD(0x027A4870, app::SteamAPICall_t, RequestGlobalStats, int32_t n_history_days)
    IL2CPP_REGISTER_METHOD(0x027A49B0, bool, GetGlobalStat_1, app::String* pch_stat_name, int64_t* p_data)
    IL2CPP_REGISTER_METHOD(0x027A4CA0, bool, GetGlobalStat_2, app::String* pch_stat_name, double* p_data)
    IL2CPP_REGISTER_METHOD(0x027A4F90, int32_t, GetGlobalStatHistory_1, app::String* pch_stat_name, app::Int64__Array* p_data, uint32_t cub_data)
    IL2CPP_REGISTER_METHOD(0x027A5290, int32_t, GetGlobalStatHistory_2, app::String* pch_stat_name, app::Double__Array* p_data, uint32_t cub_data)
} // namespace app::classes::Steamworks::SteamUserStats
