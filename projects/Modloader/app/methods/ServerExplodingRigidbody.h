#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ServerExplodingRigidbody {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerExplodingRigidbody * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00ABEBD0, app::Object*, CreateData, (app::ServerExplodingRigidbody * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00ABEC60, app::Component_1*, ApplyData, (app::ServerExplodingRigidbody * this_ptr, app::GameObject** gameobj))
} // namespace app::classes::ServerExplodingRigidbody
