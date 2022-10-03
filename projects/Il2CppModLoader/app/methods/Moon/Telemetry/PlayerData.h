#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::PlayerData {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::PlayerData * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x010A83C0, void, AddSessions, (app::PlayerData * this_ptr, app::DataPointType__Enum point_type, app::Dictionary_2_System_String_Moon_Telemetry_GameSession_* new_sessions, int32_t insert_index))
    IL2CPP_REGISTER_METHOD(0x010A8C70, app::List_1_Moon_Telemetry_DataPoint_*, GetPoints_1, (app::PlayerData * this_ptr, app::DataPointType__Enum point_type))
    IL2CPP_REGISTER_METHOD(0x010A9160, app::List_1_Moon_Telemetry_DataPoint_*, GetPoints_2, (app::PlayerData * this_ptr, app::DataPointType__Enum point_type, app::String* level_name))
    IL2CPP_REGISTER_METHOD(0x010A9550, app::List_1_Moon_Telemetry_GameSession_*, GetSessions_1, (app::PlayerData * this_ptr, app::DataPointType__Enum point_type))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Dictionary_2_DataPointType_Dictionary_2_System_String_Moon_Telemetry_GameSession_*, GetSessions_2, (app::PlayerData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Key, (app::PlayerData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A9840, int32_t, get_SessionsCount, (app::PlayerData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A99F0, void, UpdateGameSessionOrder, (app::PlayerData * this_ptr))
} // namespace app::classes::Moon::Telemetry::PlayerData
