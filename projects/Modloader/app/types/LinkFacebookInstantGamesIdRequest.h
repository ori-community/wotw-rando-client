#pragma once
#include <Modloader/app/structs/LinkFacebookInstantGamesIdRequest.h>
#include <Modloader/app/structs/LinkFacebookInstantGamesIdRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkFacebookInstantGamesIdRequest {
        inline app::LinkFacebookInstantGamesIdRequest__Class** type_info() {
            static app::LinkFacebookInstantGamesIdRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkFacebookInstantGamesIdRequest__Class**)(modloader::win::memory::resolve_rva(0x0477DCC0));
            }
            return cache;
        }
        inline app::LinkFacebookInstantGamesIdRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkFacebookInstantGamesIdRequest__Class>(type_info(), "PlayFab.ClientModels", "LinkFacebookInstantGamesIdRequest");
        }
        inline app::LinkFacebookInstantGamesIdRequest* create() {
            return il2cpp::create_object<app::LinkFacebookInstantGamesIdRequest>(get_class());
        }
    } // namespace LinkFacebookInstantGamesIdRequest
} // namespace app::classes::types
