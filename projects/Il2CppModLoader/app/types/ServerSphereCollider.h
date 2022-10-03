#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerSphereCollider {
        namespace {
            app::ServerSphereCollider__Class* type_info_ref = nullptr;
        }
        app::ServerSphereCollider__Class** type_info = &type_info_ref;
        inline app::ServerSphereCollider__Class* get_class() {
            return il2cpp::get_class<app::ServerSphereCollider__Class>(type_info, "", "ServerSphereCollider");
        }
        inline app::ServerSphereCollider* create() {
            return il2cpp::create_object<app::ServerSphereCollider>(get_class());
        }
    } // namespace ServerSphereCollider
} // namespace app::classes::types
