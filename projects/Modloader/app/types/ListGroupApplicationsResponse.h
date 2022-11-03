#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListGroupApplicationsResponse {
        inline app::ListGroupApplicationsResponse__Class** type_info = (app::ListGroupApplicationsResponse__Class**)(modloader::win::memory::resolve_rva(0x04705700));
        inline app::ListGroupApplicationsResponse__Class* get_class() {
            return il2cpp::get_class<app::ListGroupApplicationsResponse__Class>(type_info, "PlayFab.GroupsModels", "ListGroupApplicationsResponse");
        }
        inline app::ListGroupApplicationsResponse* create() {
            return il2cpp::create_object<app::ListGroupApplicationsResponse>(get_class());
        }
    } // namespace ListGroupApplicationsResponse
} // namespace app::classes::types
