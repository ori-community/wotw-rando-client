#pragma once
#include <Modloader/app/structs/AuthenticationModulesSection.h>
#include <Modloader/app/structs/AuthenticationModulesSection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthenticationModulesSection {
        inline app::AuthenticationModulesSection__Class** type_info() {
            static app::AuthenticationModulesSection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AuthenticationModulesSection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AuthenticationModulesSection__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationModulesSection__Class>(type_info(), "System.Net.Configuration", "AuthenticationModulesSection");
        }
        inline app::AuthenticationModulesSection* create() {
            return il2cpp::create_object<app::AuthenticationModulesSection>(get_class());
        }
    } // namespace AuthenticationModulesSection
} // namespace app::classes::types
