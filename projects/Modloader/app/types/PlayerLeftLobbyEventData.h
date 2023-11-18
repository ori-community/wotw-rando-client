#pragma once
#include <Modloader/app/structs/PlayerLeftLobbyEventData.h>
#include <Modloader/app/structs/PlayerLeftLobbyEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLeftLobbyEventData {
        inline app::PlayerLeftLobbyEventData__Class** type_info() {
            static app::PlayerLeftLobbyEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerLeftLobbyEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerLeftLobbyEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerLeftLobbyEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerLeftLobbyEventData");
        }
        inline app::PlayerLeftLobbyEventData* create() {
            return il2cpp::create_object<app::PlayerLeftLobbyEventData>(get_class());
        }
    } // namespace PlayerLeftLobbyEventData
} // namespace app::classes::types
