#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoveMembersRequest {
        inline app::RemoveMembersRequest__Class** type_info = (app::RemoveMembersRequest__Class**)(modloader::win::memory::resolve_rva(0x04768E80));
        inline app::RemoveMembersRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveMembersRequest__Class>(type_info, "PlayFab.GroupsModels", "RemoveMembersRequest");
        }
        inline app::RemoveMembersRequest* create() {
            return il2cpp::create_object<app::RemoveMembersRequest>(get_class());
        }
    } // namespace RemoveMembersRequest
} // namespace app::classes::types
