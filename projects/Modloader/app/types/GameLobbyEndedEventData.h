#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameLobbyEndedEventData {
        namespace {
            inline app::GameLobbyEndedEventData__Class* type_info_ref = nullptr;
        }
        inline app::GameLobbyEndedEventData__Class** type_info = &type_info_ref;
        inline app::GameLobbyEndedEventData__Class* get_class() {
            return il2cpp::get_class<app::GameLobbyEndedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GameLobbyEndedEventData");
        }
        inline app::GameLobbyEndedEventData* create() {
            return il2cpp::create_object<app::GameLobbyEndedEventData>(get_class());
        }
    } // namespace GameLobbyEndedEventData
} // namespace app::classes::types
