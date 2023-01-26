#pragma once
#include <Modloader/app/structs/PlayerLeftResponse.h>
#include <Modloader/app/structs/PlayerLeftResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLeftResponse {
        inline app::PlayerLeftResponse__Class** type_info() {
            static app::PlayerLeftResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerLeftResponse__Class**)(modloader::win::memory::resolve_rva(0x0476C0A8));
            }
            return cache;
        }
        inline app::PlayerLeftResponse__Class* get_class() {
            return il2cpp::get_class<app::PlayerLeftResponse__Class>(type_info(), "PlayFab.MatchmakerModels", "PlayerLeftResponse");
        }
        inline app::PlayerLeftResponse* create() {
            return il2cpp::create_object<app::PlayerLeftResponse>(get_class());
        }
    } // namespace PlayerLeftResponse
} // namespace app::classes::types
