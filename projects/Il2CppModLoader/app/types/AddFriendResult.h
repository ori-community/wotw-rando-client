#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddFriendResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddFriendResult__Class** type_info;
        inline app::AddFriendResult__Class* get_class() {
            return il2cpp::get_class<app::AddFriendResult__Class>(type_info, "PlayFab.ClientModels", "AddFriendResult");
        }
        inline app::AddFriendResult* create() {
            return il2cpp::create_object<app::AddFriendResult>(get_class());
        }
    } // namespace AddFriendResult
} // namespace app::classes::types
