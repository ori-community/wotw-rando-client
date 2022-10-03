#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ServerGenericAttackable {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerGenericAttackable * this_ptr, app::Object* original_component))
    IL2CPP_REGISTER_METHOD(0x00ABED30, app::Component_1*, ApplyData, (app::ServerGenericAttackable * this_ptr, app::GameObject** gameobj))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, CreateData, (app::ServerGenericAttackable * this_ptr, app::Object* data))
} // namespace app::classes::ServerGenericAttackable
