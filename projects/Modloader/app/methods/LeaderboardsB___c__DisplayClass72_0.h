#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LeaderboardsB_c_DisplayClass72_0.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_.h>

namespace app::classes::LeaderboardsB___c__DisplayClass72_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LeaderboardsB_c_DisplayClass72_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x015BF600,
        void,
        _UpdateLeaderboard_b__0,
        app::LeaderboardsB_c_DisplayClass72_0* this_ptr,
        app::List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* list
    )
} // namespace app::classes::LeaderboardsB___c__DisplayClass72_0
