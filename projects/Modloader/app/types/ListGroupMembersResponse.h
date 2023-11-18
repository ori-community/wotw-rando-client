#pragma once
#include <Modloader/app/structs/ListGroupMembersResponse.h>
#include <Modloader/app/structs/ListGroupMembersResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListGroupMembersResponse {
        inline app::ListGroupMembersResponse__Class** type_info() {
            static app::ListGroupMembersResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListGroupMembersResponse__Class**)(modloader::win::memory::resolve_rva(0x04703F80));
            }
            return cache;
        }
        inline app::ListGroupMembersResponse__Class* get_class() {
            return il2cpp::get_class<app::ListGroupMembersResponse__Class>(type_info(), "PlayFab.GroupsModels", "ListGroupMembersResponse");
        }
        inline app::ListGroupMembersResponse* create() {
            return il2cpp::create_object<app::ListGroupMembersResponse>(get_class());
        }
    } // namespace ListGroupMembersResponse
} // namespace app::classes::types
