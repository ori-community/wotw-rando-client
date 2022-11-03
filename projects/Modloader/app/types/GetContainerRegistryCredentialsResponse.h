#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetContainerRegistryCredentialsResponse {
        inline app::GetContainerRegistryCredentialsResponse__Class** type_info = (app::GetContainerRegistryCredentialsResponse__Class**)(modloader::win::memory::resolve_rva(0x04733C90));
        inline app::GetContainerRegistryCredentialsResponse__Class* get_class() {
            return il2cpp::get_class<app::GetContainerRegistryCredentialsResponse__Class>(type_info, "PlayFab.MultiplayerModels", "GetContainerRegistryCredentialsResponse");
        }
        inline app::GetContainerRegistryCredentialsResponse* create() {
            return il2cpp::create_object<app::GetContainerRegistryCredentialsResponse>(get_class());
        }
    } // namespace GetContainerRegistryCredentialsResponse
} // namespace app::classes::types
