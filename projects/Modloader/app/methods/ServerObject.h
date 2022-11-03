#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ServerObject {
    IL2CPP_REGISTER_METHOD(0x00AC0240, void, ctor, (app::ServerObject * this_ptr, app::GameObject* gameobj, app::String* prefab_guid))
}
