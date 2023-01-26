#pragma once
#include <Modloader/app/structs/RolloverContainerRegistryCredentialsRequest.h>
#include <Modloader/app/structs/RolloverContainerRegistryCredentialsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RolloverContainerRegistryCredentialsRequest {
        inline app::RolloverContainerRegistryCredentialsRequest__Class** type_info() {
            static app::RolloverContainerRegistryCredentialsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RolloverContainerRegistryCredentialsRequest__Class**)(modloader::win::memory::resolve_rva(0x0471BB18));
            }
            return cache;
        }
        inline app::RolloverContainerRegistryCredentialsRequest__Class* get_class() {
            return il2cpp::get_class<app::RolloverContainerRegistryCredentialsRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "RolloverContainerRegistryCredentialsRequest");
        }
        inline app::RolloverContainerRegistryCredentialsRequest* create() {
            return il2cpp::create_object<app::RolloverContainerRegistryCredentialsRequest>(get_class());
        }
    } // namespace RolloverContainerRegistryCredentialsRequest
} // namespace app::classes::types
