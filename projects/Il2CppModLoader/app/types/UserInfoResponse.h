#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserInfoResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserInfoResponse__Class** type_info;
        inline app::UserInfoResponse__Class* get_class() {
            return il2cpp::get_class<app::UserInfoResponse__Class>(type_info, "PlayFab.MatchmakerModels", "UserInfoResponse");
        }
        inline app::UserInfoResponse* create() {
            return il2cpp::create_object<app::UserInfoResponse>(get_class());
        }
    } // namespace UserInfoResponse
} // namespace app::classes::types
