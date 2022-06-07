#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ServerRigidbody {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerRigidbody * this_ptr, app::Object * data))
    IL2CPP_REGISTER_METHOD(0x0059F570, app::Object *, CreateData, (app::ServerRigidbody * this_ptr, app::Object * data))
    IL2CPP_REGISTER_METHOD(0x0059F830, app::Component_1 *, ApplyData, (app::ServerRigidbody * this_ptr, app::GameObject * * gameobj))
}
