#pragma once
#include <Modloader/app/structs/AddSharedGroupMembersResult.h>
#include <Modloader/app/structs/AddSharedGroupMembersResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddSharedGroupMembersResult {
        inline app::AddSharedGroupMembersResult__Class** type_info() {
            static app::AddSharedGroupMembersResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddSharedGroupMembersResult__Class**)(modloader::win::memory::resolve_rva(0x04772B88));
            }
            return cache;
        }
        inline app::AddSharedGroupMembersResult__Class* get_class() {
            return il2cpp::get_class<app::AddSharedGroupMembersResult__Class>(type_info(), "PlayFab.ClientModels", "AddSharedGroupMembersResult");
        }
        inline app::AddSharedGroupMembersResult* create() {
            return il2cpp::create_object<app::AddSharedGroupMembersResult>(get_class());
        }
    } // namespace AddSharedGroupMembersResult
} // namespace app::classes::types
