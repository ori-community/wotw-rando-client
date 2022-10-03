#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ServerConfigureConfigurableJointAction {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerConfigureConfigurableJointAction * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00ABE390, app::Object*, CreateData, (app::ServerConfigureConfigurableJointAction * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00ABE6B0, app::Component_1*, ApplyData, (app::ServerConfigureConfigurableJointAction * this_ptr, app::GameObject** gameobj))
    IL2CPP_REGISTER_METHOD(0x00ABE8C0, void, RebuildReferences, (app::ServerConfigureConfigurableJointAction * this_ptr))
} // namespace app::classes::ServerConfigureConfigurableJointAction
