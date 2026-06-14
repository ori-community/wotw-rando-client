#pragma once
#include <Modloader/app/structs/RemoveSharedGroupMembersResult.h>
#include <Modloader/app/structs/RemoveSharedGroupMembersResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveSharedGroupMembersResult {
        inline app::RemoveSharedGroupMembersResult__Class** type_info() {
            static app::RemoveSharedGroupMembersResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemoveSharedGroupMembersResult__Class**)(modloader::win::memory::resolve_rva(0x04723180));
            }
            return cache;
        }
        inline app::RemoveSharedGroupMembersResult__Class* get_class() {
            return il2cpp::get_class<app::RemoveSharedGroupMembersResult__Class>(type_info(), "PlayFab.ClientModels", "RemoveSharedGroupMembersResult");
        }
        inline app::RemoveSharedGroupMembersResult* create() {
            return il2cpp::create_object<app::RemoveSharedGroupMembersResult>(get_class());
        }
    } // namespace RemoveSharedGroupMembersResult
} // namespace app::classes::types
