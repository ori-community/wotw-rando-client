#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListMembershipResponse {
        inline app::ListMembershipResponse__Class** type_info = (app::ListMembershipResponse__Class**)(modloader::win::memory::resolve_rva(0x0476AFC8));
        inline app::ListMembershipResponse__Class* get_class() {
            return il2cpp::get_class<app::ListMembershipResponse__Class>(type_info, "PlayFab.GroupsModels", "ListMembershipResponse");
        }
        inline app::ListMembershipResponse* create() {
            return il2cpp::create_object<app::ListMembershipResponse>(get_class());
        }
    } // namespace ListMembershipResponse
} // namespace app::classes::types
