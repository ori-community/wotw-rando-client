#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveFriendRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoveFriendRequest__Class** type_info;
        inline app::RemoveFriendRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveFriendRequest__Class>(type_info, "PlayFab.ClientModels", "RemoveFriendRequest");
        }
        inline app::RemoveFriendRequest* create() {
            return il2cpp::create_object<app::RemoveFriendRequest>(get_class());
        }
    } // namespace RemoveFriendRequest
} // namespace app::classes::types
