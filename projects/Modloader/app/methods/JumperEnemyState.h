#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/JumperEnemyState.h>
#include <Modloader/app/structs/JumperEnemy.h>

namespace app::classes::JumperEnemyState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::JumperEnemyState * this_ptr, app::JumperEnemy* ground_enemy))
}
