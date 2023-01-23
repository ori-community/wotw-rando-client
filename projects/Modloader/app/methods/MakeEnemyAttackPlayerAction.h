#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MakeEnemyAttackPlayerAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::MakeEnemyAttackPlayerAction {
    IL2CPP_REGISTER_METHOD(0x009F7A00, void, Perform, (app::MakeEnemyAttackPlayerAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::MakeEnemyAttackPlayerAction * this_ptr))
} // namespace app::classes::MakeEnemyAttackPlayerAction
