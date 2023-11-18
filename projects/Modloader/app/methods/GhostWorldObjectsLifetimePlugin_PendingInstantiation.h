#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_PendingInstantiation__Boxed.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::GhostWorldObjectsLifetimePlugin_PendingInstantiation {
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, (app::GhostWorldObjectsLifetimePlugin_PendingInstantiation__Boxed * this_ptr, app::GameObject* instance, app::GameObject* prefab))
}
