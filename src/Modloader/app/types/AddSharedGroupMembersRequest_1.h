#pragma once
#include <Modloader/app/structs/AddSharedGroupMembersRequest_1.h>
#include <Modloader/app/structs/AddSharedGroupMembersRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddSharedGroupMembersRequest_1 {
        inline app::AddSharedGroupMembersRequest_1__Class** type_info() {
            static app::AddSharedGroupMembersRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddSharedGroupMembersRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04752AD0));
            }
            return cache;
        }
        inline app::AddSharedGroupMembersRequest_1__Class* get_class() {
            return il2cpp::get_class<app::AddSharedGroupMembersRequest_1__Class>(type_info(), "PlayFab.ServerModels", "AddSharedGroupMembersRequest");
        }
        inline app::AddSharedGroupMembersRequest_1* create() {
            return il2cpp::create_object<app::AddSharedGroupMembersRequest_1>(get_class());
        }
    } // namespace AddSharedGroupMembersRequest_1
} // namespace app::classes::types
