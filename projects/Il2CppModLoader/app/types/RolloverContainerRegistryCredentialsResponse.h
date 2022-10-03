#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RolloverContainerRegistryCredentialsResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RolloverContainerRegistryCredentialsResponse__Class** type_info;
        inline app::RolloverContainerRegistryCredentialsResponse__Class* get_class() {
            return il2cpp::get_class<app::RolloverContainerRegistryCredentialsResponse__Class>(type_info, "PlayFab.MultiplayerModels", "RolloverContainerRegistryCredentialsResponse");
        }
        inline app::RolloverContainerRegistryCredentialsResponse* create() {
            return il2cpp::create_object<app::RolloverContainerRegistryCredentialsResponse>(get_class());
        }
    } // namespace RolloverContainerRegistryCredentialsResponse
} // namespace app::classes::types
