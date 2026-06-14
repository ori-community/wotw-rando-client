#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AcidSlugEnemyPlaceholder.h>
#include <Modloader/app/structs/LegacyEntity.h>

namespace app::classes::AcidSlugEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x004C4260, app::LegacyEntity*, Instantiate, app::AcidSlugEnemyPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C4870, void, ctor, app::AcidSlugEnemyPlaceholder* this_ptr)
} // namespace app::classes::AcidSlugEnemyPlaceholder
