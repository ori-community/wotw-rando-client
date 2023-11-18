#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EntitySpawnSetup_AfterSpawnStateSetupHolder.h>

namespace app::classes::EntitySpawnSetup_AfterSpawnStateSetupHolder {
    IL2CPP_REGISTER_METHOD(0x00CA1B90, app::String*, get_NewStateName, (app::EntitySpawnSetup_AfterSpawnStateSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA1C10, void, ctor, (app::EntitySpawnSetup_AfterSpawnStateSetupHolder * this_ptr))
} // namespace app::classes::EntitySpawnSetup_AfterSpawnStateSetupHolder
