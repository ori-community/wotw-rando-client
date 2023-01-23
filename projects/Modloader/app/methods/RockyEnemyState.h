#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RockyEnemyState.h>
#include <Modloader/app/structs/RockyEnemy.h>

namespace app::classes::RockyEnemyState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RockyEnemyState * this_ptr, app::RockyEnemy* enemy))
}
