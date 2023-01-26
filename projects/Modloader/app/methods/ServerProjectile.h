#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ServerProjectile.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ServerProjectile {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerProjectile * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x0059DB60, app::Object*, CreateData, (app::ServerProjectile * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x0059DCD0, app::Component_1*, ApplyData, (app::ServerProjectile * this_ptr, app::GameObject** gameobj))
    IL2CPP_REGISTER_METHOD(0x0059DDF0, void, RebuildReferences, (app::ServerProjectile * this_ptr))
} // namespace app::classes::ServerProjectile
