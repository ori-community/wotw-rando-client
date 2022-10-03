#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetEntityTokenResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetEntityTokenResponse__Class** type_info;
        inline app::GetEntityTokenResponse__Class* get_class() {
            return il2cpp::get_class<app::GetEntityTokenResponse__Class>(type_info, "PlayFab.AuthenticationModels", "GetEntityTokenResponse");
        }
        inline app::GetEntityTokenResponse* create() {
            return il2cpp::create_object<app::GetEntityTokenResponse>(get_class());
        }
    } // namespace GetEntityTokenResponse
} // namespace app::classes::types
