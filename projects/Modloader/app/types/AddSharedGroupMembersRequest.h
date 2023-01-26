#pragma once
#include <Modloader/app/structs/AddSharedGroupMembersRequest.h>
#include <Modloader/app/structs/AddSharedGroupMembersRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddSharedGroupMembersRequest {
        inline app::AddSharedGroupMembersRequest__Class** type_info() {
            static app::AddSharedGroupMembersRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddSharedGroupMembersRequest__Class**)(modloader::win::memory::resolve_rva(0x04782288));
            }
            return cache;
        }
        inline app::AddSharedGroupMembersRequest__Class* get_class() {
            return il2cpp::get_class<app::AddSharedGroupMembersRequest__Class>(type_info(), "PlayFab.ClientModels", "AddSharedGroupMembersRequest");
        }
        inline app::AddSharedGroupMembersRequest* create() {
            return il2cpp::create_object<app::AddSharedGroupMembersRequest>(get_class());
        }
    } // namespace AddSharedGroupMembersRequest
} // namespace app::classes::types
