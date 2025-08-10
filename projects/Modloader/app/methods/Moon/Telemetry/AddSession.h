#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddSession.h>
#include <Modloader/app/structs/GameSessionRecord.h>

namespace app::classes::Moon::Telemetry::AddSession {
    IL2CPP_REGISTER_METHOD(0x00E32460, void, ctor, app::AddSession* this_ptr, app::GameSessionRecord* game_session)
}
