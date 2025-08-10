#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AllEnemiesKilledCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::AllEnemiesKilledCondition {
    IL2CPP_REGISTER_METHOD(0x004F2750, bool, Validate, app::AllEnemiesKilledCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::AllEnemiesKilledCondition* this_ptr)
} // namespace app::classes::AllEnemiesKilledCondition
