#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BanUsersRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BanUsersRequest__Class** type_info;
        inline app::BanUsersRequest__Class* get_class() {
            return il2cpp::get_class<app::BanUsersRequest__Class>(type_info, "PlayFab.ServerModels", "BanUsersRequest");
        }
        inline app::BanUsersRequest* create() {
            return il2cpp::create_object<app::BanUsersRequest>(get_class());
        }
    } // namespace BanUsersRequest
} // namespace app::classes::types
