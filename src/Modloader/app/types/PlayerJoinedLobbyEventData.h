#pragma once
#include <Modloader/app/structs/PlayerJoinedLobbyEventData.h>
#include <Modloader/app/structs/PlayerJoinedLobbyEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerJoinedLobbyEventData {
        inline app::PlayerJoinedLobbyEventData__Class** type_info() {
            static app::PlayerJoinedLobbyEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerJoinedLobbyEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerJoinedLobbyEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerJoinedLobbyEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerJoinedLobbyEventData");
        }
        inline app::PlayerJoinedLobbyEventData* create() {
            return il2cpp::create_object<app::PlayerJoinedLobbyEventData>(get_class());
        }
    } // namespace PlayerJoinedLobbyEventData
} // namespace app::classes::types
