#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RemoveSharedGroupMembersRequest__Class.h>
#include <Modloader/app/structs/RemoveSharedGroupMembersRequest.h>

namespace app::classes::types {
    namespace RemoveSharedGroupMembersRequest {
        inline app::RemoveSharedGroupMembersRequest__Class** type_info = (app::RemoveSharedGroupMembersRequest__Class**)(modloader::win::memory::resolve_rva(0x04738C28));
        inline app::RemoveSharedGroupMembersRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveSharedGroupMembersRequest__Class>(type_info, "PlayFab.ClientModels", "RemoveSharedGroupMembersRequest");
        }
        inline app::RemoveSharedGroupMembersRequest* create() {
            return il2cpp::create_object<app::RemoveSharedGroupMembersRequest>(get_class());
        }
    } // namespace RemoveSharedGroupMembersRequest
} // namespace app::classes::types
