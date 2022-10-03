#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetFriendsListResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetFriendsListResult__Class** type_info;
        inline app::GetFriendsListResult__Class* get_class() {
            return il2cpp::get_class<app::GetFriendsListResult__Class>(type_info, "PlayFab.ClientModels", "GetFriendsListResult");
        }
        inline app::GetFriendsListResult* create() {
            return il2cpp::create_object<app::GetFriendsListResult>(get_class());
        }
    } // namespace GetFriendsListResult
} // namespace app::classes::types
