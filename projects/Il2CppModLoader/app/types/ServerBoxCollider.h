#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerBoxCollider {
        namespace {
            app::ServerBoxCollider__Class* type_info_ref = nullptr;
        }
        app::ServerBoxCollider__Class** type_info = &type_info_ref;
        inline app::ServerBoxCollider__Class* get_class() {
            return il2cpp::get_class<app::ServerBoxCollider__Class>(type_info, "", "ServerBoxCollider");
        }
        inline app::ServerBoxCollider* create() {
            return il2cpp::create_object<app::ServerBoxCollider>(get_class());
        }
    } // namespace ServerBoxCollider
} // namespace app::classes::types
