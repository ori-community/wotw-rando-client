#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateGroupResponse {
        inline app::CreateGroupResponse__Class** type_info = (app::CreateGroupResponse__Class**)(modloader::win::memory::resolve_rva(0x0478E600));
        inline app::CreateGroupResponse__Class* get_class() {
            return il2cpp::get_class<app::CreateGroupResponse__Class>(type_info, "PlayFab.GroupsModels", "CreateGroupResponse");
        }
        inline app::CreateGroupResponse* create() {
            return il2cpp::create_object<app::CreateGroupResponse>(get_class());
        }
    } // namespace CreateGroupResponse
} // namespace app::classes::types
