#pragma once
#include <Modloader/app/structs/ListGroupApplicationsResponse.h>
#include <Modloader/app/structs/ListGroupApplicationsResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListGroupApplicationsResponse {
        inline app::ListGroupApplicationsResponse__Class** type_info() {
            static app::ListGroupApplicationsResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListGroupApplicationsResponse__Class**)(modloader::win::memory::resolve_rva(0x04705700));
            }
            return cache;
        }
        inline app::ListGroupApplicationsResponse__Class* get_class() {
            return il2cpp::get_class<app::ListGroupApplicationsResponse__Class>(type_info(), "PlayFab.GroupsModels", "ListGroupApplicationsResponse");
        }
        inline app::ListGroupApplicationsResponse* create() {
            return il2cpp::create_object<app::ListGroupApplicationsResponse>(get_class());
        }
    } // namespace ListGroupApplicationsResponse
} // namespace app::classes::types
