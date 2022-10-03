#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X520_GivenName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X520_GivenName__Class** type_info;
        inline app::X520_GivenName__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_GivenName__Class>(type_info, "Mono.Security.X509", "X520", "GivenName");
        }
        inline app::X520_GivenName* create() {
            return il2cpp::create_object<app::X520_GivenName>(get_class());
        }
    } // namespace X520_GivenName
} // namespace app::classes::types
