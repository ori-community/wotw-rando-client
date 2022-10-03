#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddFriendRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddFriendRequest_1__Class** type_info;
        inline app::AddFriendRequest_1__Class* get_class() {
            return il2cpp::get_class<app::AddFriendRequest_1__Class>(type_info, "PlayFab.ServerModels", "AddFriendRequest");
        }
        inline app::AddFriendRequest_1* create() {
            return il2cpp::create_object<app::AddFriendRequest_1>(get_class());
        }
    } // namespace AddFriendRequest_1
} // namespace app::classes::types
