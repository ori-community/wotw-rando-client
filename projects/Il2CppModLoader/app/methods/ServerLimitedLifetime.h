#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ServerLimitedLifetime {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerLimitedLifetime * this_ptr, app::Object * data))
    IL2CPP_REGISTER_METHOD(0x00ABF6F0, app::Object *, CreateData, (app::ServerLimitedLifetime * this_ptr, app::Object * data))
    IL2CPP_REGISTER_METHOD(0x00ABF780, app::Component_1 *, ApplyData, (app::ServerLimitedLifetime * this_ptr, app::GameObject * * gameobj))
}
