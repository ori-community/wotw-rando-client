#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListGroupBlocksResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListGroupBlocksResponse__Class** type_info;
        inline app::ListGroupBlocksResponse__Class* get_class() {
            return il2cpp::get_class<app::ListGroupBlocksResponse__Class>(type_info, "PlayFab.GroupsModels", "ListGroupBlocksResponse");
        }
        inline app::ListGroupBlocksResponse* create() {
            return il2cpp::create_object<app::ListGroupBlocksResponse>(get_class());
        }
    } // namespace ListGroupBlocksResponse
} // namespace app::classes::types
