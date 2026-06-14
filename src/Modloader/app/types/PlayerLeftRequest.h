#pragma once
#include <Modloader/app/structs/PlayerLeftRequest.h>
#include <Modloader/app/structs/PlayerLeftRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLeftRequest {
        inline app::PlayerLeftRequest__Class** type_info() {
            static app::PlayerLeftRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerLeftRequest__Class**)(modloader::win::memory::resolve_rva(0x0476E090));
            }
            return cache;
        }
        inline app::PlayerLeftRequest__Class* get_class() {
            return il2cpp::get_class<app::PlayerLeftRequest__Class>(type_info(), "PlayFab.MatchmakerModels", "PlayerLeftRequest");
        }
        inline app::PlayerLeftRequest* create() {
            return il2cpp::create_object<app::PlayerLeftRequest>(get_class());
        }
    } // namespace PlayerLeftRequest
} // namespace app::classes::types
