#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerLeftRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerLeftRequest__Class** type_info;
        inline app::PlayerLeftRequest__Class* get_class() {
            return il2cpp::get_class<app::PlayerLeftRequest__Class>(type_info, "PlayFab.MatchmakerModels", "PlayerLeftRequest");
        }
        inline app::PlayerLeftRequest* create() {
            return il2cpp::create_object<app::PlayerLeftRequest>(get_class());
        }
    } // namespace PlayerLeftRequest
} // namespace app::classes::types
