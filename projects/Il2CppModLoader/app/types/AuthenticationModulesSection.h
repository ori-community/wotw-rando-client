#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AuthenticationModulesSection {
        namespace {
            app::AuthenticationModulesSection__Class* type_info_ref = nullptr;
        }
        app::AuthenticationModulesSection__Class** type_info = &type_info_ref;
        inline app::AuthenticationModulesSection__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationModulesSection__Class>(type_info, "System.Net.Configuration", "AuthenticationModulesSection");
        }
        inline app::AuthenticationModulesSection* create() {
            return il2cpp::create_object<app::AuthenticationModulesSection>(get_class());
        }
    } // namespace AuthenticationModulesSection
} // namespace app::classes::types
