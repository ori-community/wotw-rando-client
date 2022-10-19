#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RolloverContainerRegistryCredentialsRequest {
        inline app::RolloverContainerRegistryCredentialsRequest__Class** type_info = (app::RolloverContainerRegistryCredentialsRequest__Class**)(modloader::win::memory::resolve_rva(0x0471BB18));
        inline app::RolloverContainerRegistryCredentialsRequest__Class* get_class() {
            return il2cpp::get_class<app::RolloverContainerRegistryCredentialsRequest__Class>(type_info, "PlayFab.MultiplayerModels", "RolloverContainerRegistryCredentialsRequest");
        }
        inline app::RolloverContainerRegistryCredentialsRequest* create() {
            return il2cpp::create_object<app::RolloverContainerRegistryCredentialsRequest>(get_class());
        }
    } // namespace RolloverContainerRegistryCredentialsRequest
} // namespace app::classes::types
