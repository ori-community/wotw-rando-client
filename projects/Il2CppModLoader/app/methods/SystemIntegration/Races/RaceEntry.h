#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SystemIntegration::Races::RaceEntry {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_UserId, (app::RaceEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_UserId, (app::RaceEntry * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_DisplayName, (app::RaceEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_DisplayName, (app::RaceEntry * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Score, (app::RaceEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_Score, (app::RaceEntry * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_Position, (app::RaceEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529E90, void, set_Position, (app::RaceEntry * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Byte__Array*, get_Data, (app::RaceEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Data, (app::RaceEntry * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::DateTime, get_EntryTime, (app::RaceEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_EntryTime, (app::RaceEntry * this_ptr, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsMe, (app::RaceEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsMe, (app::RaceEntry * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RaceEntry * this_ptr))
} // namespace app::classes::SystemIntegration::Races::RaceEntry
