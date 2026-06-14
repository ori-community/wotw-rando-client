#pragma once
#include <Modloader/app/structs/GetMultiplayerServerDetailsRequest.h>
#include <Modloader/app/structs/GetMultiplayerServerDetailsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetMultiplayerServerDetailsRequest {
        inline app::GetMultiplayerServerDetailsRequest__Class** type_info() {
            static app::GetMultiplayerServerDetailsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetMultiplayerServerDetailsRequest__Class**)(modloader::win::memory::resolve_rva(0x0472B180));
            }
            return cache;
        }
        inline app::GetMultiplayerServerDetailsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetMultiplayerServerDetailsRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "GetMultiplayerServerDetailsRequest");
        }
        inline app::GetMultiplayerServerDetailsRequest* create() {
            return il2cpp::create_object<app::GetMultiplayerServerDetailsRequest>(get_class());
        }
    } // namespace GetMultiplayerServerDetailsRequest
} // namespace app::classes::types
