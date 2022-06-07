#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Race::Database {
    IL2CPP_REGISTER_METHOD(0x00C3F180, app::String *, get_RacesFolder, ())
    IL2CPP_REGISTER_METHOD(0x00C3F270, app::String *, get_PresetsFolder, ())
    IL2CPP_REGISTER_METHOD(0x00C3F380, app::List_1_Moon_Race_LeaderBoardEntry_ *, GetLeaderBoard, (app::Database * this_ptr, app::String * race_name))
    IL2CPP_REGISTER_METHOD(0x00C3F560, app::List_1_Moon_Race_LeaderBoardEntry_ *, GetLeaderBoardWithLocalPlayerTime, (app::Database * this_ptr, app::String * race_name))
    IL2CPP_REGISTER_METHOD(0x00C3FA40, bool, IsSyncing, (app::Database * this_ptr, app::String * race_id))
    IL2CPP_REGISTER_METHOD(0x00C3FB50, void, TryGet, (app::Database * this_ptr, app::String * race_id, app::LeaderboardFilter__Enum filter, app::ITrialData * trial_data, app::RaceSettings * race_settings))
    IL2CPP_REGISTER_METHOD(0x00C40190, bool, TryGetDev, (app::Database * this_ptr, app::String * race_id, app::LeaderBoardEntry * * entry))
    IL2CPP_REGISTER_METHOD(0x00C40300, void, Add, (app::Database * this_ptr, app::String * race_id, app::String * display_name, int32_t time, app::String * data))
    IL2CPP_REGISTER_METHOD(0x00C40A70, void, Delete, (app::Database * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C40B50, void, ctor, (app::Database * this_ptr))
}
