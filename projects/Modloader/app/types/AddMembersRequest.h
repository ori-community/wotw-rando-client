#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddMembersRequest {
        inline app::AddMembersRequest__Class** type_info = (app::AddMembersRequest__Class**)(modloader::win::memory::resolve_rva(0x04746378));
        inline app::AddMembersRequest__Class* get_class() {
            return il2cpp::get_class<app::AddMembersRequest__Class>(type_info, "PlayFab.GroupsModels", "AddMembersRequest");
        }
        inline app::AddMembersRequest* create() {
            return il2cpp::create_object<app::AddMembersRequest>(get_class());
        }
    } // namespace AddMembersRequest
} // namespace app::classes::types
