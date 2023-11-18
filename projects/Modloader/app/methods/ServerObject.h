#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ServerObject.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ServerObject {
    IL2CPP_REGISTER_METHOD(0x00AC0240, void, ctor, (app::ServerObject * this_ptr, app::GameObject* gameobj, app::String* prefab_guid))
}
