#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListGroupApplicationsResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListGroupApplicationsResponse__Class** type_info;
        inline app::ListGroupApplicationsResponse__Class* get_class() {
            return il2cpp::get_class<app::ListGroupApplicationsResponse__Class>(type_info, "PlayFab.GroupsModels", "ListGroupApplicationsResponse");
        }
        inline app::ListGroupApplicationsResponse* create() {
            return il2cpp::create_object<app::ListGroupApplicationsResponse>(get_class());
        }
    } // namespace ListGroupApplicationsResponse
} // namespace app::classes::types
