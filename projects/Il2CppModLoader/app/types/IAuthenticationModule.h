#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAuthenticationModule {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAuthenticationModule__Class** type_info;
        inline app::IAuthenticationModule__Class* get_class() {
            return il2cpp::get_class<app::IAuthenticationModule__Class>(type_info, "System.Net", "IAuthenticationModule");
        }
        inline app::IAuthenticationModule* create() {
            return il2cpp::create_object<app::IAuthenticationModule>(get_class());
        }
    } // namespace IAuthenticationModule
} // namespace app::classes::types
