#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpawnProjectileAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SpawnProjectileAction {
    IL2CPP_REGISTER_METHOD(0x00EF65D0, void, Perform, (app::SpawnProjectileAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SpawnProjectileAction * this_ptr))
} // namespace app::classes::SpawnProjectileAction
