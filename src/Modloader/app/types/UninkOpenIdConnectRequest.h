#pragma once
#include <Modloader/app/structs/UninkOpenIdConnectRequest.h>
#include <Modloader/app/structs/UninkOpenIdConnectRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UninkOpenIdConnectRequest {
        inline app::UninkOpenIdConnectRequest__Class** type_info() {
            static app::UninkOpenIdConnectRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UninkOpenIdConnectRequest__Class**)(modloader::win::memory::resolve_rva(0x047424C0));
            }
            return cache;
        }
        inline app::UninkOpenIdConnectRequest__Class* get_class() {
            return il2cpp::get_class<app::UninkOpenIdConnectRequest__Class>(type_info(), "PlayFab.ClientModels", "UninkOpenIdConnectRequest");
        }
        inline app::UninkOpenIdConnectRequest* create() {
            return il2cpp::create_object<app::UninkOpenIdConnectRequest>(get_class());
        }
    } // namespace UninkOpenIdConnectRequest
} // namespace app::classes::types
