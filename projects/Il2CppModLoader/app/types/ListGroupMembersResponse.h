#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListGroupMembersResponse {
        inline app::ListGroupMembersResponse__Class** type_info = (app::ListGroupMembersResponse__Class**)(modloader::win::memory::resolve_rva(0x04703F80));
        inline app::ListGroupMembersResponse__Class* get_class() {
            return il2cpp::get_class<app::ListGroupMembersResponse__Class>(type_info, "PlayFab.GroupsModels", "ListGroupMembersResponse");
        }
        inline app::ListGroupMembersResponse* create() {
            return il2cpp::create_object<app::ListGroupMembersResponse>(get_class());
        }
    } // namespace ListGroupMembersResponse
} // namespace app::classes::types
