#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConnectionManagementSection {
        namespace {
            app::ConnectionManagementSection__Class* type_info_ref = nullptr;
        }
        app::ConnectionManagementSection__Class** type_info = &type_info_ref;
        inline app::ConnectionManagementSection__Class* get_class() {
            return il2cpp::get_class<app::ConnectionManagementSection__Class>(type_info, "System.Net.Configuration", "ConnectionManagementSection");
        }
        inline app::ConnectionManagementSection* create() {
            return il2cpp::create_object<app::ConnectionManagementSection>(get_class());
        }
    } // namespace ConnectionManagementSection
} // namespace app::classes::types
