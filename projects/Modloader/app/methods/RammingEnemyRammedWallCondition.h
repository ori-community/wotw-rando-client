#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/RammingEnemyRammedWallCondition.h>

namespace app::classes::RammingEnemyRammedWallCondition {
    IL2CPP_REGISTER_METHOD(0x0072D760, bool, Validate, app::RammingEnemyRammedWallCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0072D940, void, ctor, app::RammingEnemyRammedWallCondition* this_ptr)
} // namespace app::classes::RammingEnemyRammedWallCondition
