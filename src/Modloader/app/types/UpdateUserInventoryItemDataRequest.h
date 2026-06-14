#pragma once
#include <Modloader/app/structs/UpdateUserInventoryItemDataRequest.h>
#include <Modloader/app/structs/UpdateUserInventoryItemDataRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateUserInventoryItemDataRequest {
        inline app::UpdateUserInventoryItemDataRequest__Class** type_info() {
            static app::UpdateUserInventoryItemDataRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateUserInventoryItemDataRequest__Class**)(modloader::win::memory::resolve_rva(0x04738380));
            }
            return cache;
        }
        inline app::UpdateUserInventoryItemDataRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserInventoryItemDataRequest__Class>(type_info(), "PlayFab.ServerModels", "UpdateUserInventoryItemDataRequest");
        }
        inline app::UpdateUserInventoryItemDataRequest* create() {
            return il2cpp::create_object<app::UpdateUserInventoryItemDataRequest>(get_class());
        }
    } // namespace UpdateUserInventoryItemDataRequest
} // namespace app::classes::types
