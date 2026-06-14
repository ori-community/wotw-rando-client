#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_String_SystemIntegration_Races_RaceEntry_.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_.h>
#include <Modloader/app/structs/RaceDataCache.h>
#include <Modloader/app/structs/RaceEntry.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task_1_System_Byte_.h>

namespace app::classes::SystemIntegration::Races::RaceDataCache {
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Dictionary_2_System_String_SystemIntegration_Races_RaceEntry_*, get_Entries, app::RaceDataCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00528570, void, ctor, app::RaceDataCache* this_ptr, app::String* race_id, app::String* owner_id)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_*, get_LastMasterLeaderBoardSync, app::RaceDataCache* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FB9A0,
        void,
        set_LastMasterLeaderBoardSync,
        app::RaceDataCache* this_ptr,
        app::List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x005287F0,
        bool,
        TryGet,
        app::RaceDataCache* this_ptr,
        app::String* user_id,
        int32_t score,
        int32_t position,
        app::Byte__Array** data
    )
    IL2CPP_REGISTER_METHOD(0x00528930, void, RemoveOwnEntries, app::RaceDataCache* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00528B90,
        void,
        Set,
        app::RaceDataCache* this_ptr,
        app::String* user_id,
        app::String* display_name,
        int32_t score,
        app::Byte__Array* data,
        bool is_me,
        int32_t position
    )
    IL2CPP_REGISTER_METHOD(0x005293F0, void, Serialize, app::RaceDataCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005294B0, void, Deserialize, app::RaceDataCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005297B0, void, Clear, app::RaceDataCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529850, bool, Any, app::RaceDataCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005298E0, bool, _Set_b__15_1, app::RaceDataCache* this_ptr, app::RaceEntry* o)
    IL2CPP_REGISTER_METHOD(0x00529940, void, _Deserialize_b__17_0, app::RaceDataCache* this_ptr, app::Task_1_System_Byte_* t)
} // namespace app::classes::SystemIntegration::Races::RaceDataCache
