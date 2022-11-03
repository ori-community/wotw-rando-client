#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerLeftLobbyEventData {
        namespace {
            inline app::PlayerLeftLobbyEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerLeftLobbyEventData__Class** type_info = &type_info_ref;
        inline app::PlayerLeftLobbyEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerLeftLobbyEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerLeftLobbyEventData");
        }
        inline app::PlayerLeftLobbyEventData* create() {
            return il2cpp::create_object<app::PlayerLeftLobbyEventData>(get_class());
        }
    } // namespace PlayerLeftLobbyEventData
} // namespace app::classes::types
