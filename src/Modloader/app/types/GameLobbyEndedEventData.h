#pragma once
#include <Modloader/app/structs/GameLobbyEndedEventData.h>
#include <Modloader/app/structs/GameLobbyEndedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameLobbyEndedEventData {
        inline app::GameLobbyEndedEventData__Class** type_info() {
            static app::GameLobbyEndedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameLobbyEndedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameLobbyEndedEventData__Class* get_class() {
            return il2cpp::get_class<app::GameLobbyEndedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "GameLobbyEndedEventData");
        }
        inline app::GameLobbyEndedEventData* create() {
            return il2cpp::create_object<app::GameLobbyEndedEventData>(get_class());
        }
    } // namespace GameLobbyEndedEventData
} // namespace app::classes::types
