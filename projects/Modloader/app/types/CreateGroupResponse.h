#pragma once
#include <Modloader/app/structs/CreateGroupResponse.h>
#include <Modloader/app/structs/CreateGroupResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateGroupResponse {
        inline app::CreateGroupResponse__Class** type_info() {
            static app::CreateGroupResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateGroupResponse__Class**)(modloader::win::memory::resolve_rva(0x0478E600));
            }
            return cache;
        }
        inline app::CreateGroupResponse__Class* get_class() {
            return il2cpp::get_class<app::CreateGroupResponse__Class>(type_info(), "PlayFab.GroupsModels", "CreateGroupResponse");
        }
        inline app::CreateGroupResponse* create() {
            return il2cpp::create_object<app::CreateGroupResponse>(get_class());
        }
    } // namespace CreateGroupResponse
} // namespace app::classes::types
