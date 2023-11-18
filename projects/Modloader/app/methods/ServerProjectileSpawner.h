#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ServerProjectileSpawner.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ServerProjectileSpawner {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerProjectileSpawner * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x0059DFD0, app::Object*, CreateData, (app::ServerProjectileSpawner * this_ptr, app::Object* original_object))
    IL2CPP_REGISTER_METHOD(0x0059E2D0, app::Component_1*, ApplyData, (app::ServerProjectileSpawner * this_ptr, app::GameObject** gameobj))
    IL2CPP_REGISTER_METHOD(0x0059E460, void, RebuildReferences, (app::ServerProjectileSpawner * this_ptr))
} // namespace app::classes::ServerProjectileSpawner
