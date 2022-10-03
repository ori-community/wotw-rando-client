#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabSignInProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabSignInProvider__Class** type_info;
        inline app::PlayFabSignInProvider__Class* get_class() {
            return il2cpp::get_class<app::PlayFabSignInProvider__Class>(type_info, "SystemIntegration", "PlayFabSignInProvider");
        }
        inline app::PlayFabSignInProvider* create() {
            return il2cpp::create_object<app::PlayFabSignInProvider>(get_class());
        }
    } // namespace PlayFabSignInProvider
} // namespace app::classes::types
