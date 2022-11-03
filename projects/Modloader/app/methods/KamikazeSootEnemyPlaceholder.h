#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KamikazeSootEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00E64020, app::LegacyEntity*, Instantiate, (app::KamikazeSootEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E645E0, void, ctor, (app::KamikazeSootEnemyPlaceholder * this_ptr))
} // namespace app::classes::KamikazeSootEnemyPlaceholder
