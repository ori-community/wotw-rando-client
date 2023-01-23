#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/DataBase.h>

namespace app::classes::Moon::Telemetry::DataBase {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_PlayerKey, (app::DataBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_SessionKey, (app::DataBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Time, (app::DataBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00522850, void, ctor, (app::DataBase * this_ptr, app::String* player_key, app::String* session_key, app::String* time))
} // namespace app::classes::Moon::Telemetry::DataBase
