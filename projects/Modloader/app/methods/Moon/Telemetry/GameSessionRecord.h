#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameSessionRecord.h>
#include <Modloader/app/structs/EnvironmentInfo.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::Moon::Telemetry::GameSessionRecord {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::GameSessionRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_2, (app::GameSessionRecord * this_ptr, app::EnvironmentInfo* environment_info, app::String__Array* levels_played))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::EnvironmentInfo*, get_EnvironmentInfo, (app::GameSessionRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String__Array*, get_LevelsPlayed, (app::GameSessionRecord * this_ptr))
} // namespace app::classes::Moon::Telemetry::GameSessionRecord
