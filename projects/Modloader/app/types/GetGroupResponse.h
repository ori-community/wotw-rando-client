#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetGroupResponse__Class.h>
#include <Modloader/app/structs/GetGroupResponse.h>

namespace app::classes::types {
    namespace GetGroupResponse {
        inline app::GetGroupResponse__Class** type_info = (app::GetGroupResponse__Class**)(modloader::win::memory::resolve_rva(0x04782568));
        inline app::GetGroupResponse__Class* get_class() {
            return il2cpp::get_class<app::GetGroupResponse__Class>(type_info, "PlayFab.GroupsModels", "GetGroupResponse");
        }
        inline app::GetGroupResponse* create() {
            return il2cpp::create_object<app::GetGroupResponse>(get_class());
        }
    } // namespace GetGroupResponse
} // namespace app::classes::types
