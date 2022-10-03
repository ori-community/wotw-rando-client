#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SystemIntegration::Races::RaceRequestResultEntry {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_DisplayName, (app::RaceRequestResultEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_DisplayName, (app::RaceRequestResultEntry * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Score, (app::RaceRequestResultEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Score, (app::RaceRequestResultEntry * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Position, (app::RaceRequestResultEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A020, void, set_Position, (app::RaceRequestResultEntry * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IsMe, (app::RaceRequestResultEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_IsMe, (app::RaceRequestResultEntry * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Byte__Array*, get_Data, (app::RaceRequestResultEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Data, (app::RaceRequestResultEntry * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsSteamEntry, (app::RaceRequestResultEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsSteamEntry, (app::RaceRequestResultEntry * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0052A070, bool, get_IsLiveEntry, (app::RaceRequestResultEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A080, void, set_IsLiveEntry, (app::RaceRequestResultEntry * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_UserID, (app::RaceRequestResultEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_UserID, (app::RaceRequestResultEntry * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RaceRequestResultEntry * this_ptr))
} // namespace app::classes::SystemIntegration::Races::RaceRequestResultEntry
