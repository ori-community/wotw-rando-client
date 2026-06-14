#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpitterEnemy.h>
#include <Modloader/app/structs/SpitterEnemyState.h>

namespace app::classes::SpitterEnemyState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, app::SpitterEnemyState* this_ptr, app::SpitterEnemy* enemy)
}
