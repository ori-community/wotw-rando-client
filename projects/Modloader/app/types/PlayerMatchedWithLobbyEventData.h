#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerMatchedWithLobbyEventData__Class.h>
#include <Modloader/app/structs/PlayerMatchedWithLobbyEventData.h>

namespace app::classes::types {
    namespace PlayerMatchedWithLobbyEventData {
        namespace {
            inline app::PlayerMatchedWithLobbyEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerMatchedWithLobbyEventData__Class** type_info = &type_info_ref;
        inline app::PlayerMatchedWithLobbyEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerMatchedWithLobbyEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerMatchedWithLobbyEventData");
        }
        inline app::PlayerMatchedWithLobbyEventData* create() {
            return il2cpp::create_object<app::PlayerMatchedWithLobbyEventData>(get_class());
        }
    } // namespace PlayerMatchedWithLobbyEventData
} // namespace app::classes::types
