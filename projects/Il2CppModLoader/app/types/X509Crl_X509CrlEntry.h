#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509Crl_X509CrlEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509Crl_X509CrlEntry__Class** type_info;
        inline app::X509Crl_X509CrlEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::X509Crl_X509CrlEntry__Class>(type_info, "Mono.Security.X509", "X509Crl", "X509CrlEntry");
        }
        inline app::X509Crl_X509CrlEntry* create() {
            return il2cpp::create_object<app::X509Crl_X509CrlEntry>(get_class());
        }
    } // namespace X509Crl_X509CrlEntry
} // namespace app::classes::types
