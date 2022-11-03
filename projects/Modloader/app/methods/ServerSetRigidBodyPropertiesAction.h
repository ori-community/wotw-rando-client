#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ServerSetRigidBodyPropertiesAction {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerSetRigidBodyPropertiesAction * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x0059FF90, app::Object*, CreateData, (app::ServerSetRigidBodyPropertiesAction * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x005A01F0, app::Component_1*, ApplyData, (app::ServerSetRigidBodyPropertiesAction * this_ptr, app::GameObject** gameobj))
    IL2CPP_REGISTER_METHOD(0x005A0360, void, RebuildReferences, (app::ServerSetRigidBodyPropertiesAction * this_ptr))
} // namespace app::classes::ServerSetRigidBodyPropertiesAction
