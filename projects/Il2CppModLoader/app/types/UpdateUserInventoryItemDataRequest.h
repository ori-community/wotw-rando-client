#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateUserInventoryItemDataRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateUserInventoryItemDataRequest__Class** type_info;
        inline app::UpdateUserInventoryItemDataRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserInventoryItemDataRequest__Class>(type_info, "PlayFab.ServerModels", "UpdateUserInventoryItemDataRequest");
        }
        inline app::UpdateUserInventoryItemDataRequest* create() {
            return il2cpp::create_object<app::UpdateUserInventoryItemDataRequest>(get_class());
        }
    } // namespace UpdateUserInventoryItemDataRequest
} // namespace app::classes::types
