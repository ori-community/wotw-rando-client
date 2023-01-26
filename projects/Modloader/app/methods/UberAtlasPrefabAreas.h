#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberAtlasPrefabAreas.h>
#include <Modloader/app/structs/Action.h>

namespace app::classes::UberAtlasPrefabAreas {
    IL2CPP_REGISTER_METHOD(0x013DE8B0, void, add_OnUpdated, (app::UberAtlasPrefabAreas * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x013DE9A0, void, remove_OnUpdated, (app::UberAtlasPrefabAreas * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x013DEA90, void, ctor, (app::UberAtlasPrefabAreas * this_ptr))
} // namespace app::classes::UberAtlasPrefabAreas
