#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClaimsPrincipal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClaimsPrincipal__Class** type_info;
        inline app::ClaimsPrincipal__Class* get_class() {
            return il2cpp::get_class<app::ClaimsPrincipal__Class>(type_info, "System.Security.Claims", "ClaimsPrincipal");
        }
        inline app::ClaimsPrincipal* create() {
            return il2cpp::create_object<app::ClaimsPrincipal>(get_class());
        }
    } // namespace ClaimsPrincipal
} // namespace app::classes::types
