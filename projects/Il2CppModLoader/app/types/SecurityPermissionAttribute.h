#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityPermissionAttribute {
        namespace {
            app::SecurityPermissionAttribute__Class* type_info_ref = nullptr;
        }
        app::SecurityPermissionAttribute__Class** type_info = &type_info_ref;
        inline app::SecurityPermissionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SecurityPermissionAttribute__Class>(type_info, "System.Security.Permissions", "SecurityPermissionAttribute");
        }
        inline app::SecurityPermissionAttribute* create() {
            return il2cpp::create_object<app::SecurityPermissionAttribute>(get_class());
        }
    } // namespace SecurityPermissionAttribute
} // namespace app::classes::types
