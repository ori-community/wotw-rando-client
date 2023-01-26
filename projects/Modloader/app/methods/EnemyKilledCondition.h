#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnemyKilledCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::EnemyKilledCondition {
    IL2CPP_REGISTER_METHOD(0x00C821C0, bool, Validate, (app::EnemyKilledCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EnemyKilledCondition * this_ptr))
} // namespace app::classes::EnemyKilledCondition
