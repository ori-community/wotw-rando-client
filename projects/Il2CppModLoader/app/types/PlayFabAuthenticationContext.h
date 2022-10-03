#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabAuthenticationContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabAuthenticationContext__Class** type_info;
        inline app::PlayFabAuthenticationContext__Class* get_class() {
            return il2cpp::get_class<app::PlayFabAuthenticationContext__Class>(type_info, "PlayFab", "PlayFabAuthenticationContext");
        }
        inline app::PlayFabAuthenticationContext* create() {
            return il2cpp::create_object<app::PlayFabAuthenticationContext>(get_class());
        }
    } // namespace PlayFabAuthenticationContext
} // namespace app::classes::types
