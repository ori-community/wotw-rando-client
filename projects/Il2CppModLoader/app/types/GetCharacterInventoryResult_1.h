#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCharacterInventoryResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCharacterInventoryResult_1__Class** type_info;
        inline app::GetCharacterInventoryResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterInventoryResult_1__Class>(type_info, "PlayFab.ServerModels", "GetCharacterInventoryResult");
        }
        inline app::GetCharacterInventoryResult_1* create() {
            return il2cpp::create_object<app::GetCharacterInventoryResult_1>(get_class());
        }
    } // namespace GetCharacterInventoryResult_1
} // namespace app::classes::types
