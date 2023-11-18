#pragma once
#include <Modloader/app/structs/DeleteGroupRequest.h>
#include <Modloader/app/structs/DeleteGroupRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeleteGroupRequest {
        inline app::DeleteGroupRequest__Class** type_info() {
            static app::DeleteGroupRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeleteGroupRequest__Class**)(modloader::win::memory::resolve_rva(0x04762210));
            }
            return cache;
        }
        inline app::DeleteGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteGroupRequest__Class>(type_info(), "PlayFab.GroupsModels", "DeleteGroupRequest");
        }
        inline app::DeleteGroupRequest* create() {
            return il2cpp::create_object<app::DeleteGroupRequest>(get_class());
        }
    } // namespace DeleteGroupRequest
} // namespace app::classes::types
