#pragma once
#include <Modloader/app/structs/RefreshPSNAuthTokenRequest.h>
#include <Modloader/app/structs/RefreshPSNAuthTokenRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RefreshPSNAuthTokenRequest {
        inline app::RefreshPSNAuthTokenRequest__Class** type_info() {
            static app::RefreshPSNAuthTokenRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RefreshPSNAuthTokenRequest__Class**)(modloader::win::memory::resolve_rva(0x0472D3C0));
            }
            return cache;
        }
        inline app::RefreshPSNAuthTokenRequest__Class* get_class() {
            return il2cpp::get_class<app::RefreshPSNAuthTokenRequest__Class>(type_info(), "PlayFab.ClientModels", "RefreshPSNAuthTokenRequest");
        }
        inline app::RefreshPSNAuthTokenRequest* create() {
            return il2cpp::create_object<app::RefreshPSNAuthTokenRequest>(get_class());
        }
    } // namespace RefreshPSNAuthTokenRequest
} // namespace app::classes::types
