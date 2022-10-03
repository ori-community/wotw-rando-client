#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ServerInstantiateAction {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerInstantiateAction * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00ABF110, app::Object*, CreateData, (app::ServerInstantiateAction * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00ABF2F0, app::Component_1*, ApplyData, (app::ServerInstantiateAction * this_ptr, app::GameObject** gameobj))
    IL2CPP_REGISTER_METHOD(0x00ABF450, void, RebuildReferences, (app::ServerInstantiateAction * this_ptr))
} // namespace app::classes::ServerInstantiateAction
