#pragma once
#include <Modloader/app/structs/DeleteSharedGroupRequest.h>
#include <Modloader/app/structs/DeleteSharedGroupRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeleteSharedGroupRequest {
        inline app::DeleteSharedGroupRequest__Class** type_info() {
            static app::DeleteSharedGroupRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeleteSharedGroupRequest__Class**)(modloader::win::memory::resolve_rva(0x047681D0));
            }
            return cache;
        }
        inline app::DeleteSharedGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteSharedGroupRequest__Class>(type_info(), "PlayFab.ServerModels", "DeleteSharedGroupRequest");
        }
        inline app::DeleteSharedGroupRequest* create() {
            return il2cpp::create_object<app::DeleteSharedGroupRequest>(get_class());
        }
    } // namespace DeleteSharedGroupRequest
} // namespace app::classes::types
