#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerJoinedRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerJoinedRequest__Class** type_info;
        inline app::PlayerJoinedRequest__Class* get_class() {
            return il2cpp::get_class<app::PlayerJoinedRequest__Class>(type_info, "PlayFab.MatchmakerModels", "PlayerJoinedRequest");
        }
        inline app::PlayerJoinedRequest* create() {
            return il2cpp::create_object<app::PlayerJoinedRequest>(get_class());
        }
    } // namespace PlayerJoinedRequest
} // namespace app::classes::types
