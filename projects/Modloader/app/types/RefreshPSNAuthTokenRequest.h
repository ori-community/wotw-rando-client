#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RefreshPSNAuthTokenRequest__Class.h>
#include <Modloader/app/structs/RefreshPSNAuthTokenRequest.h>

namespace app::classes::types {
    namespace RefreshPSNAuthTokenRequest {
        inline app::RefreshPSNAuthTokenRequest__Class** type_info = (app::RefreshPSNAuthTokenRequest__Class**)(modloader::win::memory::resolve_rva(0x0472D3C0));
        inline app::RefreshPSNAuthTokenRequest__Class* get_class() {
            return il2cpp::get_class<app::RefreshPSNAuthTokenRequest__Class>(type_info, "PlayFab.ClientModels", "RefreshPSNAuthTokenRequest");
        }
        inline app::RefreshPSNAuthTokenRequest* create() {
            return il2cpp::create_object<app::RefreshPSNAuthTokenRequest>(get_class());
        }
    } // namespace RefreshPSNAuthTokenRequest
} // namespace app::classes::types
