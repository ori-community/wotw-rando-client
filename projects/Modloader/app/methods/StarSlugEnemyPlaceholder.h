#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/StarSlugEnemyPlaceholder.h>

namespace app::classes::StarSlugEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x009B1190, app::LegacyEntity*, Instantiate, app::StarSlugEnemyPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009B1770, void, ctor, app::StarSlugEnemyPlaceholder* this_ptr)
} // namespace app::classes::StarSlugEnemyPlaceholder
