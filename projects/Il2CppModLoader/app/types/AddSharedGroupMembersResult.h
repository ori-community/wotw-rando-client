#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddSharedGroupMembersResult {
        inline app::AddSharedGroupMembersResult__Class** type_info = (app::AddSharedGroupMembersResult__Class**)(modloader::win::memory::resolve_rva(0x04772B88));
        inline app::AddSharedGroupMembersResult__Class* get_class() {
            return il2cpp::get_class<app::AddSharedGroupMembersResult__Class>(type_info, "PlayFab.ClientModels", "AddSharedGroupMembersResult");
        }
        inline app::AddSharedGroupMembersResult* create() {
            return il2cpp::create_object<app::AddSharedGroupMembersResult>(get_class());
        }
    } // namespace AddSharedGroupMembersResult
} // namespace app::classes::types
