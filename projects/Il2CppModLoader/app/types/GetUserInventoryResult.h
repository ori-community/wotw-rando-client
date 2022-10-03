#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetUserInventoryResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetUserInventoryResult__Class** type_info;
        inline app::GetUserInventoryResult__Class* get_class() {
            return il2cpp::get_class<app::GetUserInventoryResult__Class>(type_info, "PlayFab.ClientModels", "GetUserInventoryResult");
        }
        inline app::GetUserInventoryResult* create() {
            return il2cpp::create_object<app::GetUserInventoryResult>(get_class());
        }
    } // namespace GetUserInventoryResult
} // namespace app::classes::types
