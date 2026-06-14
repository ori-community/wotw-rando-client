#pragma once
#include <Modloader/app/structs/LinkFacebookAccountRequest.h>
#include <Modloader/app/structs/LinkFacebookAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkFacebookAccountRequest {
        inline app::LinkFacebookAccountRequest__Class** type_info() {
            static app::LinkFacebookAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkFacebookAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x0471F2E0));
            }
            return cache;
        }
        inline app::LinkFacebookAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkFacebookAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "LinkFacebookAccountRequest");
        }
        inline app::LinkFacebookAccountRequest* create() {
            return il2cpp::create_object<app::LinkFacebookAccountRequest>(get_class());
        }
    } // namespace LinkFacebookAccountRequest
} // namespace app::classes::types
