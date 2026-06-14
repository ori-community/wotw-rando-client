#pragma once
#include <Modloader/app/structs/LinkGoogleAccountRequest.h>
#include <Modloader/app/structs/LinkGoogleAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkGoogleAccountRequest {
        inline app::LinkGoogleAccountRequest__Class** type_info() {
            static app::LinkGoogleAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkGoogleAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04732258));
            }
            return cache;
        }
        inline app::LinkGoogleAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkGoogleAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "LinkGoogleAccountRequest");
        }
        inline app::LinkGoogleAccountRequest* create() {
            return il2cpp::create_object<app::LinkGoogleAccountRequest>(get_class());
        }
    } // namespace LinkGoogleAccountRequest
} // namespace app::classes::types
