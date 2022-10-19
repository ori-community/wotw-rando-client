#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AuthenticationModuleElement {
        namespace {
            inline app::AuthenticationModuleElement__Class* type_info_ref = nullptr;
        }
        inline app::AuthenticationModuleElement__Class** type_info = &type_info_ref;
        inline app::AuthenticationModuleElement__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationModuleElement__Class>(type_info, "System.Net.Configuration", "AuthenticationModuleElement");
        }
        inline app::AuthenticationModuleElement* create() {
            return il2cpp::create_object<app::AuthenticationModuleElement>(get_class());
        }
    } // namespace AuthenticationModuleElement
} // namespace app::classes::types
