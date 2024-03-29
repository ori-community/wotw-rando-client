#pragma once
#include <Modloader/app/structs/UnlinkFacebookInstantGamesIdRequest.h>
#include <Modloader/app/structs/UnlinkFacebookInstantGamesIdRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkFacebookInstantGamesIdRequest {
        inline app::UnlinkFacebookInstantGamesIdRequest__Class** type_info() {
            static app::UnlinkFacebookInstantGamesIdRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkFacebookInstantGamesIdRequest__Class**)(modloader::win::memory::resolve_rva(0x04798078));
            }
            return cache;
        }
        inline app::UnlinkFacebookInstantGamesIdRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkFacebookInstantGamesIdRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlinkFacebookInstantGamesIdRequest");
        }
        inline app::UnlinkFacebookInstantGamesIdRequest* create() {
            return il2cpp::create_object<app::UnlinkFacebookInstantGamesIdRequest>(get_class());
        }
    } // namespace UnlinkFacebookInstantGamesIdRequest
} // namespace app::classes::types
