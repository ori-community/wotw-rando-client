#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X520_OrganizationalUnitName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X520_OrganizationalUnitName__Class** type_info;
        inline app::X520_OrganizationalUnitName__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_OrganizationalUnitName__Class>(type_info, "Mono.Security.X509", "X520", "OrganizationalUnitName");
        }
        inline app::X520_OrganizationalUnitName* create() {
            return il2cpp::create_object<app::X520_OrganizationalUnitName>(get_class());
        }
    } // namespace X520_OrganizationalUnitName
} // namespace app::classes::types
