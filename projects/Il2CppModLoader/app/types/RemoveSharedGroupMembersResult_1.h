#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoveSharedGroupMembersResult_1 {
        inline app::RemoveSharedGroupMembersResult_1__Class** type_info = (app::RemoveSharedGroupMembersResult_1__Class**)(modloader::win::memory::resolve_rva(0x0472F420));
        inline app::RemoveSharedGroupMembersResult_1__Class* get_class() {
            return il2cpp::get_class<app::RemoveSharedGroupMembersResult_1__Class>(type_info, "PlayFab.ServerModels", "RemoveSharedGroupMembersResult");
        }
        inline app::RemoveSharedGroupMembersResult_1* create() {
            return il2cpp::create_object<app::RemoveSharedGroupMembersResult_1>(get_class());
        }
    } // namespace RemoveSharedGroupMembersResult_1
} // namespace app::classes::types
