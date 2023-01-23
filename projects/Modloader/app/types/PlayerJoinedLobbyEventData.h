#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerJoinedLobbyEventData__Class.h>
#include <Modloader/app/structs/PlayerJoinedLobbyEventData.h>

namespace app::classes::types {
    namespace PlayerJoinedLobbyEventData {
        namespace {
            inline app::PlayerJoinedLobbyEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerJoinedLobbyEventData__Class** type_info = &type_info_ref;
        inline app::PlayerJoinedLobbyEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerJoinedLobbyEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerJoinedLobbyEventData");
        }
        inline app::PlayerJoinedLobbyEventData* create() {
            return il2cpp::create_object<app::PlayerJoinedLobbyEventData>(get_class());
        }
    } // namespace PlayerJoinedLobbyEventData
} // namespace app::classes::types
