#pragma once
#include <Modloader/app/structs/AddMembersRequest.h>
#include <Modloader/app/structs/AddMembersRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddMembersRequest {
        inline app::AddMembersRequest__Class** type_info() {
            static app::AddMembersRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddMembersRequest__Class**)(modloader::win::memory::resolve_rva(0x04746378));
            }
            return cache;
        }
        inline app::AddMembersRequest__Class* get_class() {
            return il2cpp::get_class<app::AddMembersRequest__Class>(type_info(), "PlayFab.GroupsModels", "AddMembersRequest");
        }
        inline app::AddMembersRequest* create() {
            return il2cpp::create_object<app::AddMembersRequest>(get_class());
        }
    } // namespace AddMembersRequest
} // namespace app::classes::types
