#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerLeftResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerLeftResponse__Class** type_info;
        inline app::PlayerLeftResponse__Class* get_class() {
            return il2cpp::get_class<app::PlayerLeftResponse__Class>(type_info, "PlayFab.MatchmakerModels", "PlayerLeftResponse");
        }
        inline app::PlayerLeftResponse* create() {
            return il2cpp::create_object<app::PlayerLeftResponse>(get_class());
        }
    } // namespace PlayerLeftResponse
} // namespace app::classes::types
