#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoveSharedGroupMembersRequest_1 {
        inline app::RemoveSharedGroupMembersRequest_1__Class** type_info = (app::RemoveSharedGroupMembersRequest_1__Class**)(modloader::win::memory::resolve_rva(0x047905A0));
        inline app::RemoveSharedGroupMembersRequest_1__Class* get_class() {
            return il2cpp::get_class<app::RemoveSharedGroupMembersRequest_1__Class>(type_info, "PlayFab.ServerModels", "RemoveSharedGroupMembersRequest");
        }
        inline app::RemoveSharedGroupMembersRequest_1* create() {
            return il2cpp::create_object<app::RemoveSharedGroupMembersRequest_1>(get_class());
        }
    } // namespace RemoveSharedGroupMembersRequest_1
} // namespace app::classes::types
