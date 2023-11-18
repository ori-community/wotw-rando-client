#pragma once
#include <Modloader/app/structs/GameLobbyStartedEventData.h>
#include <Modloader/app/structs/GameLobbyStartedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameLobbyStartedEventData {
        inline app::GameLobbyStartedEventData__Class** type_info() {
            static app::GameLobbyStartedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameLobbyStartedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameLobbyStartedEventData__Class* get_class() {
            return il2cpp::get_class<app::GameLobbyStartedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "GameLobbyStartedEventData");
        }
        inline app::GameLobbyStartedEventData* create() {
            return il2cpp::create_object<app::GameLobbyStartedEventData>(get_class());
        }
    } // namespace GameLobbyStartedEventData
} // namespace app::classes::types
