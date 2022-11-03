#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UninkOpenIdConnectRequest {
        inline app::UninkOpenIdConnectRequest__Class** type_info = (app::UninkOpenIdConnectRequest__Class**)(modloader::win::memory::resolve_rva(0x047424C0));
        inline app::UninkOpenIdConnectRequest__Class* get_class() {
            return il2cpp::get_class<app::UninkOpenIdConnectRequest__Class>(type_info, "PlayFab.ClientModels", "UninkOpenIdConnectRequest");
        }
        inline app::UninkOpenIdConnectRequest* create() {
            return il2cpp::create_object<app::UninkOpenIdConnectRequest>(get_class());
        }
    } // namespace UninkOpenIdConnectRequest
} // namespace app::classes::types
