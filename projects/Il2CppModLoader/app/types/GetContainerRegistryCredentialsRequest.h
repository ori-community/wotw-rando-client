#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetContainerRegistryCredentialsRequest {
        inline app::GetContainerRegistryCredentialsRequest__Class** type_info = (app::GetContainerRegistryCredentialsRequest__Class**)(modloader::win::memory::resolve_rva(0x047281E8));
        inline app::GetContainerRegistryCredentialsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetContainerRegistryCredentialsRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetContainerRegistryCredentialsRequest");
        }
        inline app::GetContainerRegistryCredentialsRequest* create() {
            return il2cpp::create_object<app::GetContainerRegistryCredentialsRequest>(get_class());
        }
    } // namespace GetContainerRegistryCredentialsRequest
} // namespace app::classes::types
