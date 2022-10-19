#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateGroupRequest {
        inline app::UpdateGroupRequest__Class** type_info = (app::UpdateGroupRequest__Class**)(modloader::win::memory::resolve_rva(0x04747778));
        inline app::UpdateGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateGroupRequest__Class>(type_info, "PlayFab.GroupsModels", "UpdateGroupRequest");
        }
        inline app::UpdateGroupRequest* create() {
            return il2cpp::create_object<app::UpdateGroupRequest>(get_class());
        }
    } // namespace UpdateGroupRequest
} // namespace app::classes::types
