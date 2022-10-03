#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserInfoRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserInfoRequest__Class** type_info;
        inline app::UserInfoRequest__Class* get_class() {
            return il2cpp::get_class<app::UserInfoRequest__Class>(type_info, "PlayFab.MatchmakerModels", "UserInfoRequest");
        }
        inline app::UserInfoRequest* create() {
            return il2cpp::create_object<app::UserInfoRequest>(get_class());
        }
    } // namespace UserInfoRequest
} // namespace app::classes::types
