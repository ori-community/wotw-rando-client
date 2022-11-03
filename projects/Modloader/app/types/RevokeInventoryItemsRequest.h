#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RevokeInventoryItemsRequest {
        inline app::RevokeInventoryItemsRequest__Class** type_info = (app::RevokeInventoryItemsRequest__Class**)(modloader::win::memory::resolve_rva(0x04719C68));
        inline app::RevokeInventoryItemsRequest__Class* get_class() {
            return il2cpp::get_class<app::RevokeInventoryItemsRequest__Class>(type_info, "PlayFab.ServerModels", "RevokeInventoryItemsRequest");
        }
        inline app::RevokeInventoryItemsRequest* create() {
            return il2cpp::create_object<app::RevokeInventoryItemsRequest>(get_class());
        }
    } // namespace RevokeInventoryItemsRequest
} // namespace app::classes::types
