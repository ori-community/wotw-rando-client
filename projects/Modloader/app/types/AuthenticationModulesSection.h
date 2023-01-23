#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AuthenticationModulesSection__Class.h>
#include <Modloader/app/structs/AuthenticationModulesSection.h>

namespace app::classes::types {
    namespace AuthenticationModulesSection {
        namespace {
            inline app::AuthenticationModulesSection__Class* type_info_ref = nullptr;
        }
        inline app::AuthenticationModulesSection__Class** type_info = &type_info_ref;
        inline app::AuthenticationModulesSection__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationModulesSection__Class>(type_info, "System.Net.Configuration", "AuthenticationModulesSection");
        }
        inline app::AuthenticationModulesSection* create() {
            return il2cpp::create_object<app::AuthenticationModulesSection>(get_class());
        }
    } // namespace AuthenticationModulesSection
} // namespace app::classes::types
