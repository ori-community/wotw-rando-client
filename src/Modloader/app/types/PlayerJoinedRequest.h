#pragma once
#include <Modloader/app/structs/PlayerJoinedRequest.h>
#include <Modloader/app/structs/PlayerJoinedRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerJoinedRequest {
        inline app::PlayerJoinedRequest__Class** type_info() {
            static app::PlayerJoinedRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerJoinedRequest__Class**)(modloader::win::memory::resolve_rva(0x047420A8));
            }
            return cache;
        }
        inline app::PlayerJoinedRequest__Class* get_class() {
            return il2cpp::get_class<app::PlayerJoinedRequest__Class>(type_info(), "PlayFab.MatchmakerModels", "PlayerJoinedRequest");
        }
        inline app::PlayerJoinedRequest* create() {
            return il2cpp::create_object<app::PlayerJoinedRequest>(get_class());
        }
    } // namespace PlayerJoinedRequest
} // namespace app::classes::types
