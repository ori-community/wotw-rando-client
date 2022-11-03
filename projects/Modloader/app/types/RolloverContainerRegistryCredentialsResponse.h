#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RolloverContainerRegistryCredentialsResponse {
        inline app::RolloverContainerRegistryCredentialsResponse__Class** type_info = (app::RolloverContainerRegistryCredentialsResponse__Class**)(modloader::win::memory::resolve_rva(0x047400A8));
        inline app::RolloverContainerRegistryCredentialsResponse__Class* get_class() {
            return il2cpp::get_class<app::RolloverContainerRegistryCredentialsResponse__Class>(type_info, "PlayFab.MultiplayerModels", "RolloverContainerRegistryCredentialsResponse");
        }
        inline app::RolloverContainerRegistryCredentialsResponse* create() {
            return il2cpp::create_object<app::RolloverContainerRegistryCredentialsResponse>(get_class());
        }
    } // namespace RolloverContainerRegistryCredentialsResponse
} // namespace app::classes::types
