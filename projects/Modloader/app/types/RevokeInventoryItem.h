#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RevokeInventoryItem__Class.h>
#include <Modloader/app/structs/RevokeInventoryItem.h>
#include <Modloader/app/structs/RevokeInventoryItem__Array.h>

namespace app::classes::types {
    namespace RevokeInventoryItem {
        namespace {
            inline app::RevokeInventoryItem__Class* type_info_ref = nullptr;
        }
        inline app::RevokeInventoryItem__Class** type_info = &type_info_ref;
        inline app::RevokeInventoryItem__Class* get_class() {
            return il2cpp::get_class<app::RevokeInventoryItem__Class>(type_info, "PlayFab.ServerModels", "RevokeInventoryItem");
        }
        inline app::RevokeInventoryItem* create() {
            return il2cpp::create_object<app::RevokeInventoryItem>(get_class());
        }
        inline app::RevokeInventoryItem__Array* create_array(int size) {
            return il2cpp::array_new<app::RevokeInventoryItem__Array>(get_class(), size);
        }
        inline app::RevokeInventoryItem__Array* create_array(const std::vector<app::RevokeInventoryItem*>& items) {
            return il2cpp::array_new<app::RevokeInventoryItem__Array>(get_class(), items);
        }
    } // namespace RevokeInventoryItem
} // namespace app::classes::types
