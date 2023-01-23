#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AddSharedGroupMembersResult_1__Class.h>
#include <Modloader/app/structs/AddSharedGroupMembersResult_1.h>

namespace app::classes::types {
    namespace AddSharedGroupMembersResult_1 {
        inline app::AddSharedGroupMembersResult_1__Class** type_info = (app::AddSharedGroupMembersResult_1__Class**)(modloader::win::memory::resolve_rva(0x0471DBA0));
        inline app::AddSharedGroupMembersResult_1__Class* get_class() {
            return il2cpp::get_class<app::AddSharedGroupMembersResult_1__Class>(type_info, "PlayFab.ServerModels", "AddSharedGroupMembersResult");
        }
        inline app::AddSharedGroupMembersResult_1* create() {
            return il2cpp::create_object<app::AddSharedGroupMembersResult_1>(get_class());
        }
    } // namespace AddSharedGroupMembersResult_1
} // namespace app::classes::types
