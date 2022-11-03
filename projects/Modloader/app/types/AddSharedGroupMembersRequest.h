#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddSharedGroupMembersRequest {
        inline app::AddSharedGroupMembersRequest__Class** type_info = (app::AddSharedGroupMembersRequest__Class**)(modloader::win::memory::resolve_rva(0x04782288));
        inline app::AddSharedGroupMembersRequest__Class* get_class() {
            return il2cpp::get_class<app::AddSharedGroupMembersRequest__Class>(type_info, "PlayFab.ClientModels", "AddSharedGroupMembersRequest");
        }
        inline app::AddSharedGroupMembersRequest* create() {
            return il2cpp::create_object<app::AddSharedGroupMembersRequest>(get_class());
        }
    } // namespace AddSharedGroupMembersRequest
} // namespace app::classes::types
