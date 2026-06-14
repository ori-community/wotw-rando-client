#pragma once
#include <Modloader/app/structs/ListGroupMembersRequest.h>
#include <Modloader/app/structs/ListGroupMembersRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListGroupMembersRequest {
        inline app::ListGroupMembersRequest__Class** type_info() {
            static app::ListGroupMembersRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListGroupMembersRequest__Class**)(modloader::win::memory::resolve_rva(0x047116C0));
            }
            return cache;
        }
        inline app::ListGroupMembersRequest__Class* get_class() {
            return il2cpp::get_class<app::ListGroupMembersRequest__Class>(type_info(), "PlayFab.GroupsModels", "ListGroupMembersRequest");
        }
        inline app::ListGroupMembersRequest* create() {
            return il2cpp::create_object<app::ListGroupMembersRequest>(get_class());
        }
    } // namespace ListGroupMembersRequest
} // namespace app::classes::types
