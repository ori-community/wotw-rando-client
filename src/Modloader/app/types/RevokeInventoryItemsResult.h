#pragma once
#include <Modloader/app/structs/RevokeInventoryItemsResult.h>
#include <Modloader/app/structs/RevokeInventoryItemsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RevokeInventoryItemsResult {
        inline app::RevokeInventoryItemsResult__Class** type_info() {
            static app::RevokeInventoryItemsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RevokeInventoryItemsResult__Class**)(modloader::win::memory::resolve_rva(0x047879B8));
            }
            return cache;
        }
        inline app::RevokeInventoryItemsResult__Class* get_class() {
            return il2cpp::get_class<app::RevokeInventoryItemsResult__Class>(type_info(), "PlayFab.ServerModels", "RevokeInventoryItemsResult");
        }
        inline app::RevokeInventoryItemsResult* create() {
            return il2cpp::create_object<app::RevokeInventoryItemsResult>(get_class());
        }
    } // namespace RevokeInventoryItemsResult
} // namespace app::classes::types
