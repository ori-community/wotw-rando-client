#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericPrincipal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GenericPrincipal__Class** type_info;
        inline app::GenericPrincipal__Class* get_class() {
            return il2cpp::get_class<app::GenericPrincipal__Class>(type_info, "System.Security.Principal", "GenericPrincipal");
        }
        inline app::GenericPrincipal* create() {
            return il2cpp::create_object<app::GenericPrincipal>(get_class());
        }
    } // namespace GenericPrincipal
} // namespace app::classes::types
