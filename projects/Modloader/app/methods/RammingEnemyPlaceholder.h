#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/RammingEnemyPlaceholder.h>

namespace app::classes::RammingEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0072D020, app::LegacyEntity*, Instantiate, (app::RammingEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, OnRammingEnemyReplaced, (app::RammingEnemyPlaceholder * this_ptr, app::LegacyEntity* entity))
    IL2CPP_REGISTER_METHODINFO(0x047637B8, RammingEnemyPlaceholder_OnRammingEnemyReplaced__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0072D690, void, ctor, (app::RammingEnemyPlaceholder * this_ptr))
} // namespace app::classes::RammingEnemyPlaceholder
