#pragma once
#include <Modloader/app/structs/PlayerJoinedResponse.h>
#include <Modloader/app/structs/PlayerJoinedResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerJoinedResponse {
        inline app::PlayerJoinedResponse__Class** type_info() {
            static app::PlayerJoinedResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerJoinedResponse__Class**)(modloader::win::memory::resolve_rva(0x04743490));
            }
            return cache;
        }
        inline app::PlayerJoinedResponse__Class* get_class() {
            return il2cpp::get_class<app::PlayerJoinedResponse__Class>(type_info(), "PlayFab.MatchmakerModels", "PlayerJoinedResponse");
        }
        inline app::PlayerJoinedResponse* create() {
            return il2cpp::create_object<app::PlayerJoinedResponse>(get_class());
        }
    } // namespace PlayerJoinedResponse
} // namespace app::classes::types
