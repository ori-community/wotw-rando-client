#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RevokeInventoryItemRequest {
        inline app::RevokeInventoryItemRequest__Class** type_info = (app::RevokeInventoryItemRequest__Class**)(modloader::win::memory::resolve_rva(0x04748838));
        inline app::RevokeInventoryItemRequest__Class* get_class() {
            return il2cpp::get_class<app::RevokeInventoryItemRequest__Class>(type_info, "PlayFab.ServerModels", "RevokeInventoryItemRequest");
        }
        inline app::RevokeInventoryItemRequest* create() {
            return il2cpp::create_object<app::RevokeInventoryItemRequest>(get_class());
        }
    } // namespace RevokeInventoryItemRequest
} // namespace app::classes::types
