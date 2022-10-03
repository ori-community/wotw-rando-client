#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConnectionManagementElement {
        namespace {
            app::ConnectionManagementElement__Class* type_info_ref = nullptr;
        }
        app::ConnectionManagementElement__Class** type_info = &type_info_ref;
        inline app::ConnectionManagementElement__Class* get_class() {
            return il2cpp::get_class<app::ConnectionManagementElement__Class>(type_info, "System.Net.Configuration", "ConnectionManagementElement");
        }
        inline app::ConnectionManagementElement* create() {
            return il2cpp::create_object<app::ConnectionManagementElement>(get_class());
        }
    } // namespace ConnectionManagementElement
} // namespace app::classes::types
