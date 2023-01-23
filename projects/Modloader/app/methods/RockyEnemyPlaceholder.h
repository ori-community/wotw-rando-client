#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/RockyEnemyPlaceholder.h>

namespace app::classes::RockyEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x01361870, app::LegacyEntity*, Instantiate, (app::RockyEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013623E0, void, ctor, (app::RockyEnemyPlaceholder * this_ptr))
} // namespace app::classes::RockyEnemyPlaceholder
