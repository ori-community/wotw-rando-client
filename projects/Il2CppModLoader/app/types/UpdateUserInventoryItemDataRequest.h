#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateUserInventoryItemDataRequest {
        inline app::UpdateUserInventoryItemDataRequest__Class** type_info = (app::UpdateUserInventoryItemDataRequest__Class**)(modloader::win::memory::resolve_rva(0x04738380));
        inline app::UpdateUserInventoryItemDataRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserInventoryItemDataRequest__Class>(type_info, "PlayFab.ServerModels", "UpdateUserInventoryItemDataRequest");
        }
        inline app::UpdateUserInventoryItemDataRequest* create() {
            return il2cpp::create_object<app::UpdateUserInventoryItemDataRequest>(get_class());
        }
    } // namespace UpdateUserInventoryItemDataRequest
} // namespace app::classes::types
