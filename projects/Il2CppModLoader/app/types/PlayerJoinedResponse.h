#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerJoinedResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerJoinedResponse__Class** type_info;
        inline app::PlayerJoinedResponse__Class* get_class() {
            return il2cpp::get_class<app::PlayerJoinedResponse__Class>(type_info, "PlayFab.MatchmakerModels", "PlayerJoinedResponse");
        }
        inline app::PlayerJoinedResponse* create() {
            return il2cpp::create_object<app::PlayerJoinedResponse>(get_class());
        }
    } // namespace PlayerJoinedResponse
} // namespace app::classes::types
