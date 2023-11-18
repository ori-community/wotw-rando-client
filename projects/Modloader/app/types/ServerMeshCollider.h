#pragma once
#include <Modloader/app/structs/ServerMeshCollider.h>
#include <Modloader/app/structs/ServerMeshCollider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerMeshCollider {
        inline app::ServerMeshCollider__Class** type_info() {
            static app::ServerMeshCollider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerMeshCollider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerMeshCollider__Class* get_class() {
            return il2cpp::get_class<app::ServerMeshCollider__Class>(type_info(), "", "ServerMeshCollider");
        }
        inline app::ServerMeshCollider* create() {
            return il2cpp::create_object<app::ServerMeshCollider>(get_class());
        }
    } // namespace ServerMeshCollider
} // namespace app::classes::types
