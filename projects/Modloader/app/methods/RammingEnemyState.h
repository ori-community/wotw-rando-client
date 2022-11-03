#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RammingEnemyState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RammingEnemyState * this_ptr, app::RammingEnemy* enemy))
}
