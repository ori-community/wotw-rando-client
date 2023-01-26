#pragma once
#include <Modloader/app/structs/GrantItemsToUserRequest.h>
#include <Modloader/app/structs/GrantItemsToUserRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrantItemsToUserRequest {
        inline app::GrantItemsToUserRequest__Class** type_info() {
            static app::GrantItemsToUserRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrantItemsToUserRequest__Class**)(modloader::win::memory::resolve_rva(0x04788BE8));
            }
            return cache;
        }
        inline app::GrantItemsToUserRequest__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToUserRequest__Class>(type_info(), "PlayFab.ServerModels", "GrantItemsToUserRequest");
        }
        inline app::GrantItemsToUserRequest* create() {
            return il2cpp::create_object<app::GrantItemsToUserRequest>(get_class());
        }
    } // namespace GrantItemsToUserRequest
} // namespace app::classes::types
