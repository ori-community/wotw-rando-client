#pragma once
#include <Modloader/app/structs/PlayerMatchedWithLobbyEventData.h>
#include <Modloader/app/structs/PlayerMatchedWithLobbyEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerMatchedWithLobbyEventData {
        inline app::PlayerMatchedWithLobbyEventData__Class** type_info() {
            static app::PlayerMatchedWithLobbyEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerMatchedWithLobbyEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerMatchedWithLobbyEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerMatchedWithLobbyEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerMatchedWithLobbyEventData");
        }
        inline app::PlayerMatchedWithLobbyEventData* create() {
            return il2cpp::create_object<app::PlayerMatchedWithLobbyEventData>(get_class());
        }
    } // namespace PlayerMatchedWithLobbyEventData
} // namespace app::classes::types
