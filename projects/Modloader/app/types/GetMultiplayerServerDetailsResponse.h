#pragma once
#include <Modloader/app/structs/GetMultiplayerServerDetailsResponse.h>
#include <Modloader/app/structs/GetMultiplayerServerDetailsResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetMultiplayerServerDetailsResponse {
        inline app::GetMultiplayerServerDetailsResponse__Class** type_info() {
            static app::GetMultiplayerServerDetailsResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetMultiplayerServerDetailsResponse__Class**)(modloader::win::memory::resolve_rva(0x047709F0));
            }
            return cache;
        }
        inline app::GetMultiplayerServerDetailsResponse__Class* get_class() {
            return il2cpp::get_class<app::GetMultiplayerServerDetailsResponse__Class>(type_info(), "PlayFab.MultiplayerModels", "GetMultiplayerServerDetailsResponse");
        }
        inline app::GetMultiplayerServerDetailsResponse* create() {
            return il2cpp::create_object<app::GetMultiplayerServerDetailsResponse>(get_class());
        }
    } // namespace GetMultiplayerServerDetailsResponse
} // namespace app::classes::types
