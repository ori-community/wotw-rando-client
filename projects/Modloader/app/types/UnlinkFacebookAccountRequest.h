#pragma once
#include <Modloader/app/structs/UnlinkFacebookAccountRequest.h>
#include <Modloader/app/structs/UnlinkFacebookAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkFacebookAccountRequest {
        inline app::UnlinkFacebookAccountRequest__Class** type_info() {
            static app::UnlinkFacebookAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkFacebookAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x047101E0));
            }
            return cache;
        }
        inline app::UnlinkFacebookAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkFacebookAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlinkFacebookAccountRequest");
        }
        inline app::UnlinkFacebookAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkFacebookAccountRequest>(get_class());
        }
    } // namespace UnlinkFacebookAccountRequest
} // namespace app::classes::types
