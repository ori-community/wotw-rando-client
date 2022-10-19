#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
