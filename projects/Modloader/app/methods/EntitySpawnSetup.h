#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityPlaceholder.h>
#include <Modloader/app/structs/EntitySpawnSetup.h>

namespace app::classes::EntitySpawnSetup {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::EntityPlaceholder*, get_Placeholer, (app::EntitySpawnSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Placeholer, (app::EntitySpawnSetup * this_ptr, app::EntityPlaceholder* value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EntitySpawnSetup * this_ptr))
} // namespace app::classes::EntitySpawnSetup
