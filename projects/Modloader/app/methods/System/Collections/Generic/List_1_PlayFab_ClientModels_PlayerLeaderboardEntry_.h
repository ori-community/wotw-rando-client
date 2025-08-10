#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_PlayFab_ClientModels_PlayerLeaderboardEntry_.h>
#include <Modloader/app/structs/PlayerLeaderboardEntry.h>
#include <Modloader/app/structs/Predicate_1_PlayFab_ClientModels_PlayerLeaderboardEntry_.h>

namespace app::classes::System::Collections::Generic::List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::PlayerLeaderboardEntry*,
        get_Item,
        app::List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_PlayFab_ClientModels_PlayerLeaderboardEntry_,
        GetEnumerator,
        app::List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x025E96A0,
        bool,
        Exists,
        app::List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* this_ptr,
        app::Predicate_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* match
    )
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* this_ptr, app::PlayerLeaderboardEntry* item)
} // namespace app::classes::System::Collections::Generic::List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_
