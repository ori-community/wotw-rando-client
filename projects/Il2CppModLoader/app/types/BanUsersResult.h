#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BanUsersResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BanUsersResult__Class** type_info;
        inline app::BanUsersResult__Class* get_class() {
            return il2cpp::get_class<app::BanUsersResult__Class>(type_info, "PlayFab.ServerModels", "BanUsersResult");
        }
        inline app::BanUsersResult* create() {
            return il2cpp::create_object<app::BanUsersResult>(get_class());
        }
    } // namespace BanUsersResult
} // namespace app::classes::types
