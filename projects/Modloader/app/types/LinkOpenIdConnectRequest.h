#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LinkOpenIdConnectRequest__Class.h>
#include <Modloader/app/structs/LinkOpenIdConnectRequest.h>

namespace app::classes::types {
    namespace LinkOpenIdConnectRequest {
        inline app::LinkOpenIdConnectRequest__Class** type_info = (app::LinkOpenIdConnectRequest__Class**)(modloader::win::memory::resolve_rva(0x0475C390));
        inline app::LinkOpenIdConnectRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkOpenIdConnectRequest__Class>(type_info, "PlayFab.ClientModels", "LinkOpenIdConnectRequest");
        }
        inline app::LinkOpenIdConnectRequest* create() {
            return il2cpp::create_object<app::LinkOpenIdConnectRequest>(get_class());
        }
    } // namespace LinkOpenIdConnectRequest
} // namespace app::classes::types
