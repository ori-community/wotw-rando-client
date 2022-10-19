#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RevokeInventoryItem__Array {
        namespace {
            inline app::RevokeInventoryItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::RevokeInventoryItem__Array__Class** type_info = &type_info_ref;
        inline app::RevokeInventoryItem__Array__Class* get_class() {
            return il2cpp::get_class<app::RevokeInventoryItem__Array__Class>(type_info, "PlayFab.ServerModels", "RevokeInventoryItem[]");
        }
        inline app::RevokeInventoryItem__Array* create() {
            return il2cpp::create_object<app::RevokeInventoryItem__Array>(get_class());
        }
    } // namespace RevokeInventoryItem__Array
} // namespace app::classes::types
