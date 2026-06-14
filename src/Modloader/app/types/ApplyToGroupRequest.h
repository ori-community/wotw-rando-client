#pragma once
#include <Modloader/app/structs/ApplyToGroupRequest.h>
#include <Modloader/app/structs/ApplyToGroupRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplyToGroupRequest {
        inline app::ApplyToGroupRequest__Class** type_info() {
            static app::ApplyToGroupRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ApplyToGroupRequest__Class**)(modloader::win::memory::resolve_rva(0x04719AB8));
            }
            return cache;
        }
        inline app::ApplyToGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::ApplyToGroupRequest__Class>(type_info(), "PlayFab.GroupsModels", "ApplyToGroupRequest");
        }
        inline app::ApplyToGroupRequest* create() {
            return il2cpp::create_object<app::ApplyToGroupRequest>(get_class());
        }
    } // namespace ApplyToGroupRequest
} // namespace app::classes::types
