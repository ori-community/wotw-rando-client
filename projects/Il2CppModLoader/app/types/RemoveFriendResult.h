#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveFriendResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoveFriendResult__Class** type_info;
        inline app::RemoveFriendResult__Class* get_class() {
            return il2cpp::get_class<app::RemoveFriendResult__Class>(type_info, "PlayFab.ClientModels", "RemoveFriendResult");
        }
        inline app::RemoveFriendResult* create() {
            return il2cpp::create_object<app::RemoveFriendResult>(get_class());
        }
    } // namespace RemoveFriendResult
} // namespace app::classes::types
