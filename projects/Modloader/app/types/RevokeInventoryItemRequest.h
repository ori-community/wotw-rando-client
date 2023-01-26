#pragma once
#include <Modloader/app/structs/RevokeInventoryItemRequest.h>
#include <Modloader/app/structs/RevokeInventoryItemRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RevokeInventoryItemRequest {
        inline app::RevokeInventoryItemRequest__Class** type_info() {
            static app::RevokeInventoryItemRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RevokeInventoryItemRequest__Class**)(modloader::win::memory::resolve_rva(0x04748838));
            }
            return cache;
        }
        inline app::RevokeInventoryItemRequest__Class* get_class() {
            return il2cpp::get_class<app::RevokeInventoryItemRequest__Class>(type_info(), "PlayFab.ServerModels", "RevokeInventoryItemRequest");
        }
        inline app::RevokeInventoryItemRequest* create() {
            return il2cpp::create_object<app::RevokeInventoryItemRequest>(get_class());
        }
    } // namespace RevokeInventoryItemRequest
} // namespace app::classes::types
