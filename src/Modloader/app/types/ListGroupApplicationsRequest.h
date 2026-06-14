#pragma once
#include <Modloader/app/structs/ListGroupApplicationsRequest.h>
#include <Modloader/app/structs/ListGroupApplicationsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListGroupApplicationsRequest {
        inline app::ListGroupApplicationsRequest__Class** type_info() {
            static app::ListGroupApplicationsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListGroupApplicationsRequest__Class**)(modloader::win::memory::resolve_rva(0x04717800));
            }
            return cache;
        }
        inline app::ListGroupApplicationsRequest__Class* get_class() {
            return il2cpp::get_class<app::ListGroupApplicationsRequest__Class>(type_info(), "PlayFab.GroupsModels", "ListGroupApplicationsRequest");
        }
        inline app::ListGroupApplicationsRequest* create() {
            return il2cpp::create_object<app::ListGroupApplicationsRequest>(get_class());
        }
    } // namespace ListGroupApplicationsRequest
} // namespace app::classes::types
