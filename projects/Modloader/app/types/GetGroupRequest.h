#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetGroupRequest {
        inline app::GetGroupRequest__Class** type_info = (app::GetGroupRequest__Class**)(modloader::win::memory::resolve_rva(0x047694E0));
        inline app::GetGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::GetGroupRequest__Class>(type_info, "PlayFab.GroupsModels", "GetGroupRequest");
        }
        inline app::GetGroupRequest* create() {
            return il2cpp::create_object<app::GetGroupRequest>(get_class());
        }
    } // namespace GetGroupRequest
} // namespace app::classes::types
