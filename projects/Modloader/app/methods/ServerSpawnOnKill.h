#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ServerSpawnOnKill.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::ServerSpawnOnKill {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerSpawnOnKill * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x005A05C0, app::Object*, CreateData, (app::ServerSpawnOnKill * this_ptr, app::Object* original_component))
    IL2CPP_REGISTER_METHOD(0x005A0770, app::Component_1*, ApplyData, (app::ServerSpawnOnKill * this_ptr, app::GameObject** gameobj))
} // namespace app::classes::ServerSpawnOnKill
