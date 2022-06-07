#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ServerTransform {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerTransform * this_ptr, app::Object * data))
    IL2CPP_REGISTER_METHOD(0x005A10D0, app::Object *, CreateData, (app::ServerTransform * this_ptr, app::Object * data))
    IL2CPP_REGISTER_METHOD(0x005A1550, app::Component_1 *, ApplyData, (app::ServerTransform * this_ptr, app::GameObject * * gameobj))
}
