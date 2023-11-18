#pragma once
#include <Modloader/app/structs/GetContainerRegistryCredentialsResponse.h>
#include <Modloader/app/structs/GetContainerRegistryCredentialsResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetContainerRegistryCredentialsResponse {
        inline app::GetContainerRegistryCredentialsResponse__Class** type_info() {
            static app::GetContainerRegistryCredentialsResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetContainerRegistryCredentialsResponse__Class**)(modloader::win::memory::resolve_rva(0x04733C90));
            }
            return cache;
        }
        inline app::GetContainerRegistryCredentialsResponse__Class* get_class() {
            return il2cpp::get_class<app::GetContainerRegistryCredentialsResponse__Class>(type_info(), "PlayFab.MultiplayerModels", "GetContainerRegistryCredentialsResponse");
        }
        inline app::GetContainerRegistryCredentialsResponse* create() {
            return il2cpp::create_object<app::GetContainerRegistryCredentialsResponse>(get_class());
        }
    } // namespace GetContainerRegistryCredentialsResponse
} // namespace app::classes::types
