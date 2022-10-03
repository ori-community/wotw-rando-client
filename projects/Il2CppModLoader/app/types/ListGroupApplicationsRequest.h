#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListGroupApplicationsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListGroupApplicationsRequest__Class** type_info;
        inline app::ListGroupApplicationsRequest__Class* get_class() {
            return il2cpp::get_class<app::ListGroupApplicationsRequest__Class>(type_info, "PlayFab.GroupsModels", "ListGroupApplicationsRequest");
        }
        inline app::ListGroupApplicationsRequest* create() {
            return il2cpp::create_object<app::ListGroupApplicationsRequest>(get_class());
        }
    } // namespace ListGroupApplicationsRequest
} // namespace app::classes::types
