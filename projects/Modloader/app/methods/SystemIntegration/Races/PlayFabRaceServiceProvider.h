#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider.h>
#include <Modloader/app/structs/IDataProvider.h>
#include <Modloader/app/structs/PlayFabSignInProvider.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/RaceDataLeaderBoardType__Enum.h>
#include <Modloader/app/structs/LeaderboardFilter__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Task_1_SystemIntegration_Races_RaceRequestResult_.h>
#include <Modloader/app/structs/RaceRequestResult.h>
#include <Modloader/app/structs/RaceDataCache.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_.h>
#include <Modloader/app/structs/Task_1_SystemIntegration_Races_RaceRequestResultEntry_.h>
#include <Modloader/app/structs/PlayerProfileModel.h>
#include <Modloader/app/structs/LeaderBoardEntry.h>

namespace app::classes::SystemIntegration::Races::PlayFabRaceServiceProvider {
    IL2CPP_REGISTER_METHOD(0x005245D0, void, ctor, (app::PlayFabRaceServiceProvider * this_ptr, app::IDataProvider* statistics_provider_provider, app::PlayFabSignInProvider* play_fab_sign_in_provider))
    IL2CPP_REGISTER_METHOD(0x00524950, void, LoadRaceCacheFor, (app::PlayFabRaceServiceProvider * this_ptr, app::IEnumerable_1_System_String_* race_ids, app::RaceDataLeaderBoardType__Enum type, app::LeaderboardFilter__Enum filter))
    IL2CPP_REGISTER_METHOD(0x00524BC0, void, PostNewRaceData, (app::PlayFabRaceServiceProvider * this_ptr, app::String* race_id, app::String* display_name, int32_t score, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x00525120, app::Task_1_SystemIntegration_Races_RaceRequestResult_*, GetRaceData, (app::PlayFabRaceServiceProvider * this_ptr, app::String* race_id, app::RaceDataLeaderBoardType__Enum type, app::LeaderboardFilter__Enum filter))
    IL2CPP_REGISTER_METHOD(0x00525270, app::String*, ToRaceString, (app::String * race_id, app::RaceDataLeaderBoardType__Enum type, app::LeaderboardFilter__Enum filter))
    IL2CPP_REGISTER_METHOD(0x00525390, app::RaceRequestResult*, ProcessCachedLeaderBoardList, (app::PlayFabRaceServiceProvider * this_ptr, app::RaceDataCache* data_cache))
    IL2CPP_REGISTER_METHOD(0x00525730, app::Task_1_SystemIntegration_Races_RaceRequestResult_*, ProcessLeaderBoardList, (app::PlayFabRaceServiceProvider * this_ptr, app::List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* list, app::String* race_id, app::RaceDataLeaderBoardType__Enum type, app::LeaderboardFilter__Enum filter, app::RaceDataCache* data_cache))
    IL2CPP_REGISTER_METHOD(0x00525870, app::RaceDataCache*, TryAndGetCacheFor, (app::PlayFabRaceServiceProvider * this_ptr, app::String* cache_id))
    IL2CPP_REGISTER_METHOD(0x00525AE0, app::Task_1_SystemIntegration_Races_RaceRequestResultEntry_*, GetRaceResultEntry, (app::PlayFabRaceServiceProvider * this_ptr, app::String* race_id, app::String* user_id, int32_t score, int32_t position, app::String* display_name, app::RaceDataLeaderBoardType__Enum type, app::LeaderboardFilter__Enum filter, app::PlayerProfileModel* profile))
    IL2CPP_REGISTER_METHOD(0x00525C30, void, ClearCache, (app::PlayFabRaceServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00525E30, void, PostCachedData, (app::PlayFabRaceServiceProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00525EC0, bool, TryGetDeveloperGhostDataForRace, (app::PlayFabRaceServiceProvider * this_ptr, app::String* race_id, app::LeaderBoardEntry** entry))
    IL2CPP_REGISTER_METHOD(0x00526060, void, SaveDeveloperGhostDataForRace, (app::PlayFabRaceServiceProvider * this_ptr, app::String* race_id, int32_t score, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x005262A0, void, Update, (app::PlayFabRaceServiceProvider * this_ptr))
} // namespace app::classes::SystemIntegration::Races::PlayFabRaceServiceProvider
