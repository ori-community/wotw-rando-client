#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RevokeInventoryItemsResult {
        inline app::RevokeInventoryItemsResult__Class** type_info = (app::RevokeInventoryItemsResult__Class**)(modloader::win::memory::resolve_rva(0x047879B8));
        inline app::RevokeInventoryItemsResult__Class* get_class() {
            return il2cpp::get_class<app::RevokeInventoryItemsResult__Class>(type_info, "PlayFab.ServerModels", "RevokeInventoryItemsResult");
        }
        inline app::RevokeInventoryItemsResult* create() {
            return il2cpp::create_object<app::RevokeInventoryItemsResult>(get_class());
        }
    } // namespace RevokeInventoryItemsResult
} // namespace app::classes::types
