#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCharacterInventoryResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCharacterInventoryResult__Class** type_info;
        inline app::GetCharacterInventoryResult__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterInventoryResult__Class>(type_info, "PlayFab.ClientModels", "GetCharacterInventoryResult");
        }
        inline app::GetCharacterInventoryResult* create() {
            return il2cpp::create_object<app::GetCharacterInventoryResult>(get_class());
        }
    } // namespace GetCharacterInventoryResult
} // namespace app::classes::types
