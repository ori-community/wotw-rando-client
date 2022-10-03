#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetFriendTagsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetFriendTagsResult__Class** type_info;
        inline app::SetFriendTagsResult__Class* get_class() {
            return il2cpp::get_class<app::SetFriendTagsResult__Class>(type_info, "PlayFab.ClientModels", "SetFriendTagsResult");
        }
        inline app::SetFriendTagsResult* create() {
            return il2cpp::create_object<app::SetFriendTagsResult>(get_class());
        }
    } // namespace SetFriendTagsResult
} // namespace app::classes::types
