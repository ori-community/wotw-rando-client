#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerJoinedLobbyEventData {
        namespace {
            app::PlayerJoinedLobbyEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerJoinedLobbyEventData__Class** type_info = &type_info_ref;
        inline app::PlayerJoinedLobbyEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerJoinedLobbyEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerJoinedLobbyEventData");
        }
        inline app::PlayerJoinedLobbyEventData* create() {
            return il2cpp::create_object<app::PlayerJoinedLobbyEventData>(get_class());
        }
    } // namespace PlayerJoinedLobbyEventData
} // namespace app::classes::types
