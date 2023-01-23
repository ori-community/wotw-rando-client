#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RammingEnemySettings.h>

namespace app::classes::RammingEnemySettings {
    IL2CPP_REGISTER_METHOD(0x0072D950, void, ctor, (app::RammingEnemySettings * this_ptr))
}
