#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerMeshCollider {
        namespace {
            app::ServerMeshCollider__Class* type_info_ref = nullptr;
        }
        app::ServerMeshCollider__Class** type_info = &type_info_ref;
        inline app::ServerMeshCollider__Class* get_class() {
            return il2cpp::get_class<app::ServerMeshCollider__Class>(type_info, "", "ServerMeshCollider");
        }
        inline app::ServerMeshCollider* create() {
            return il2cpp::create_object<app::ServerMeshCollider>(get_class());
        }
    } // namespace ServerMeshCollider
} // namespace app::classes::types
