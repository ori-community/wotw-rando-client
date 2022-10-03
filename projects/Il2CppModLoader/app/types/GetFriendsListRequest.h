#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetFriendsListRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetFriendsListRequest__Class** type_info;
        inline app::GetFriendsListRequest__Class* get_class() {
            return il2cpp::get_class<app::GetFriendsListRequest__Class>(type_info, "PlayFab.ClientModels", "GetFriendsListRequest");
        }
        inline app::GetFriendsListRequest* create() {
            return il2cpp::create_object<app::GetFriendsListRequest>(get_class());
        }
    } // namespace GetFriendsListRequest
} // namespace app::classes::types
