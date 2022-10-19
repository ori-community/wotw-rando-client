#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerBoxCollider {
        namespace {
            inline app::ServerBoxCollider__Class* type_info_ref = nullptr;
        }
        inline app::ServerBoxCollider__Class** type_info = &type_info_ref;
        inline app::ServerBoxCollider__Class* get_class() {
            return il2cpp::get_class<app::ServerBoxCollider__Class>(type_info, "", "ServerBoxCollider");
        }
        inline app::ServerBoxCollider* create() {
            return il2cpp::create_object<app::ServerBoxCollider>(get_class());
        }
    } // namespace ServerBoxCollider
} // namespace app::classes::types
