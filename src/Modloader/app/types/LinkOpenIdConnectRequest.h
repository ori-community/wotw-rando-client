#pragma once
#include <Modloader/app/structs/LinkOpenIdConnectRequest.h>
#include <Modloader/app/structs/LinkOpenIdConnectRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkOpenIdConnectRequest {
        inline app::LinkOpenIdConnectRequest__Class** type_info() {
            static app::LinkOpenIdConnectRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkOpenIdConnectRequest__Class**)(modloader::win::memory::resolve_rva(0x0475C390));
            }
            return cache;
        }
        inline app::LinkOpenIdConnectRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkOpenIdConnectRequest__Class>(type_info(), "PlayFab.ClientModels", "LinkOpenIdConnectRequest");
        }
        inline app::LinkOpenIdConnectRequest* create() {
            return il2cpp::create_object<app::LinkOpenIdConnectRequest>(get_class());
        }
    } // namespace LinkOpenIdConnectRequest
} // namespace app::classes::types
