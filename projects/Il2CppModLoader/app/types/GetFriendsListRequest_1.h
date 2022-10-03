#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetFriendsListRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetFriendsListRequest_1__Class** type_info;
        inline app::GetFriendsListRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetFriendsListRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetFriendsListRequest");
        }
        inline app::GetFriendsListRequest_1* create() {
            return il2cpp::create_object<app::GetFriendsListRequest_1>(get_class());
        }
    } // namespace GetFriendsListRequest_1
} // namespace app::classes::types
