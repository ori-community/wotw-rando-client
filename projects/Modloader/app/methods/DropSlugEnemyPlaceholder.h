#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/DropSlugEnemyPlaceholder.h>

namespace app::classes::DropSlugEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00BE3690, app::LegacyEntity*, Instantiate, (app::DropSlugEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE3D30, void, ctor, (app::DropSlugEnemyPlaceholder * this_ptr))
} // namespace app::classes::DropSlugEnemyPlaceholder
