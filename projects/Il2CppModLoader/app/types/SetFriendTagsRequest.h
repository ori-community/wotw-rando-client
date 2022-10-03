#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetFriendTagsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetFriendTagsRequest__Class** type_info;
        inline app::SetFriendTagsRequest__Class* get_class() {
            return il2cpp::get_class<app::SetFriendTagsRequest__Class>(type_info, "PlayFab.ClientModels", "SetFriendTagsRequest");
        }
        inline app::SetFriendTagsRequest* create() {
            return il2cpp::create_object<app::SetFriendTagsRequest>(get_class());
        }
    } // namespace SetFriendTagsRequest
} // namespace app::classes::types
