#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JumperEnemyPlaceholder.h>
#include <Modloader/app/structs/LegacyEntity.h>

namespace app::classes::JumperEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00E59010, app::LegacyEntity*, Instantiate, app::JumperEnemyPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E59740, void, ctor, app::JumperEnemyPlaceholder* this_ptr)
} // namespace app::classes::JumperEnemyPlaceholder
