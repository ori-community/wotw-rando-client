#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameLobbyStartedEventData {
        namespace {
            inline app::GameLobbyStartedEventData__Class* type_info_ref = nullptr;
        }
        inline app::GameLobbyStartedEventData__Class** type_info = &type_info_ref;
        inline app::GameLobbyStartedEventData__Class* get_class() {
            return il2cpp::get_class<app::GameLobbyStartedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GameLobbyStartedEventData");
        }
        inline app::GameLobbyStartedEventData* create() {
            return il2cpp::create_object<app::GameLobbyStartedEventData>(get_class());
        }
    } // namespace GameLobbyStartedEventData
} // namespace app::classes::types
