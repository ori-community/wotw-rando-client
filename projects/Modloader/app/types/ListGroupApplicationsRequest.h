#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListGroupApplicationsRequest {
        inline app::ListGroupApplicationsRequest__Class** type_info = (app::ListGroupApplicationsRequest__Class**)(modloader::win::memory::resolve_rva(0x04717800));
        inline app::ListGroupApplicationsRequest__Class* get_class() {
            return il2cpp::get_class<app::ListGroupApplicationsRequest__Class>(type_info, "PlayFab.GroupsModels", "ListGroupApplicationsRequest");
        }
        inline app::ListGroupApplicationsRequest* create() {
            return il2cpp::create_object<app::ListGroupApplicationsRequest>(get_class());
        }
    } // namespace ListGroupApplicationsRequest
} // namespace app::classes::types
