#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebPermissionAttribute {
        namespace {
            app::WebPermissionAttribute__Class* type_info_ref = nullptr;
        }
        app::WebPermissionAttribute__Class** type_info = &type_info_ref;
        inline app::WebPermissionAttribute__Class* get_class() {
            return il2cpp::get_class<app::WebPermissionAttribute__Class>(type_info, "System.Net", "WebPermissionAttribute");
        }
        inline app::WebPermissionAttribute* create() {
            return il2cpp::create_object<app::WebPermissionAttribute>(get_class());
        }
    } // namespace WebPermissionAttribute
} // namespace app::classes::types
