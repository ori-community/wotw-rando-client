#pragma once
#include <Modloader/app/structs/RemoveSharedGroupMembersResult_1.h>
#include <Modloader/app/structs/RemoveSharedGroupMembersResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveSharedGroupMembersResult_1 {
        inline app::RemoveSharedGroupMembersResult_1__Class** type_info() {
            static app::RemoveSharedGroupMembersResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemoveSharedGroupMembersResult_1__Class**)(modloader::win::memory::resolve_rva(0x0472F420));
            }
            return cache;
        }
        inline app::RemoveSharedGroupMembersResult_1__Class* get_class() {
            return il2cpp::get_class<app::RemoveSharedGroupMembersResult_1__Class>(type_info(), "PlayFab.ServerModels", "RemoveSharedGroupMembersResult");
        }
        inline app::RemoveSharedGroupMembersResult_1* create() {
            return il2cpp::create_object<app::RemoveSharedGroupMembersResult_1>(get_class());
        }
    } // namespace RemoveSharedGroupMembersResult_1
} // namespace app::classes::types
