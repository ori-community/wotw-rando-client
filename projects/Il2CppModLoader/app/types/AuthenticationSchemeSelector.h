#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AuthenticationSchemeSelector {
        namespace {
            inline app::AuthenticationSchemeSelector__Class* type_info_ref = nullptr;
        }
        inline app::AuthenticationSchemeSelector__Class** type_info = &type_info_ref;
        inline app::AuthenticationSchemeSelector__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationSchemeSelector__Class>(type_info, "System.Net", "AuthenticationSchemeSelector");
        }
        inline app::AuthenticationSchemeSelector* create() {
            return il2cpp::create_object<app::AuthenticationSchemeSelector>(get_class());
        }
    } // namespace AuthenticationSchemeSelector
} // namespace app::classes::types
