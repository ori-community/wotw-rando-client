#pragma once
#include <Modloader/app/structs/ApplyToGroupResponse.h>
#include <Modloader/app/structs/ApplyToGroupResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplyToGroupResponse {
        inline app::ApplyToGroupResponse__Class** type_info() {
            static app::ApplyToGroupResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ApplyToGroupResponse__Class**)(modloader::win::memory::resolve_rva(0x04731220));
            }
            return cache;
        }
        inline app::ApplyToGroupResponse__Class* get_class() {
            return il2cpp::get_class<app::ApplyToGroupResponse__Class>(type_info(), "PlayFab.GroupsModels", "ApplyToGroupResponse");
        }
        inline app::ApplyToGroupResponse* create() {
            return il2cpp::create_object<app::ApplyToGroupResponse>(get_class());
        }
    } // namespace ApplyToGroupResponse
} // namespace app::classes::types
