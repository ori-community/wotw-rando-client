#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetContainerRegistryCredentialsResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetContainerRegistryCredentialsResponse__Class** type_info;
        inline app::GetContainerRegistryCredentialsResponse__Class* get_class() {
            return il2cpp::get_class<app::GetContainerRegistryCredentialsResponse__Class>(type_info, "PlayFab.MultiplayerModels", "GetContainerRegistryCredentialsResponse");
        }
        inline app::GetContainerRegistryCredentialsResponse* create() {
            return il2cpp::create_object<app::GetContainerRegistryCredentialsResponse>(get_class());
        }
    } // namespace GetContainerRegistryCredentialsResponse
} // namespace app::classes::types
