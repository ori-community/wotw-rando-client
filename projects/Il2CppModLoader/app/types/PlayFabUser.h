#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabUser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabUser__Class** type_info;
        inline app::PlayFabUser__Class* get_class() {
            return il2cpp::get_class<app::PlayFabUser__Class>(type_info, "usedStandaloneScripts.SystemIntegration.SignIn.User", "PlayFabUser");
        }
        inline app::PlayFabUser* create() {
            return il2cpp::create_object<app::PlayFabUser>(get_class());
        }
    } // namespace PlayFabUser
} // namespace app::classes::types
