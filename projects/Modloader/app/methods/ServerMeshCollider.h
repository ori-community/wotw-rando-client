#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ServerMeshCollider {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerMeshCollider * this_ptr, app::Object* original_component))
    IL2CPP_REGISTER_METHOD(0x00ABF850, app::Object*, CreateData, (app::ServerMeshCollider * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00ABFBF0, app::Component_1*, ApplyData, (app::ServerMeshCollider * this_ptr, app::GameObject** gameobj))
} // namespace app::classes::ServerMeshCollider
