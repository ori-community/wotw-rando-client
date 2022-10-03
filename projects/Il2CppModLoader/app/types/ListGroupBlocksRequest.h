#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListGroupBlocksRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListGroupBlocksRequest__Class** type_info;
        inline app::ListGroupBlocksRequest__Class* get_class() {
            return il2cpp::get_class<app::ListGroupBlocksRequest__Class>(type_info, "PlayFab.GroupsModels", "ListGroupBlocksRequest");
        }
        inline app::ListGroupBlocksRequest* create() {
            return il2cpp::create_object<app::ListGroupBlocksRequest>(get_class());
        }
    } // namespace ListGroupBlocksRequest
} // namespace app::classes::types
