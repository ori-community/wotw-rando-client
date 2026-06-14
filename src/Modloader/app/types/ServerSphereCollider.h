#pragma once
#include <Modloader/app/structs/ServerSphereCollider.h>
#include <Modloader/app/structs/ServerSphereCollider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerSphereCollider {
        inline app::ServerSphereCollider__Class** type_info() {
            static app::ServerSphereCollider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerSphereCollider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerSphereCollider__Class* get_class() {
            return il2cpp::get_class<app::ServerSphereCollider__Class>(type_info(), "", "ServerSphereCollider");
        }
        inline app::ServerSphereCollider* create() {
            return il2cpp::create_object<app::ServerSphereCollider>(get_class());
        }
    } // namespace ServerSphereCollider
} // namespace app::classes::types
