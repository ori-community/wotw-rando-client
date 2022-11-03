#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListMembershipRequest {
        inline app::ListMembershipRequest__Class** type_info = (app::ListMembershipRequest__Class**)(modloader::win::memory::resolve_rva(0x0471EB20));
        inline app::ListMembershipRequest__Class* get_class() {
            return il2cpp::get_class<app::ListMembershipRequest__Class>(type_info, "PlayFab.GroupsModels", "ListMembershipRequest");
        }
        inline app::ListMembershipRequest* create() {
            return il2cpp::create_object<app::ListMembershipRequest>(get_class());
        }
    } // namespace ListMembershipRequest
} // namespace app::classes::types
