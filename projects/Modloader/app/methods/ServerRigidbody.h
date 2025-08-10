#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ServerRigidbody.h>

namespace app::classes::ServerRigidbody {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, app::ServerRigidbody* this_ptr, app::Object* data)
    IL2CPP_REGISTER_METHOD(0x0059F570, app::Object*, CreateData, app::ServerRigidbody* this_ptr, app::Object* data)
    IL2CPP_REGISTER_METHOD(0x0059F830, app::Component_1*, ApplyData, app::ServerRigidbody* this_ptr, app::GameObject** gameobj)
} // namespace app::classes::ServerRigidbody
