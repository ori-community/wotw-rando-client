#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCharacterInventoryRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCharacterInventoryRequest_1__Class** type_info;
        inline app::GetCharacterInventoryRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterInventoryRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetCharacterInventoryRequest");
        }
        inline app::GetCharacterInventoryRequest_1* create() {
            return il2cpp::create_object<app::GetCharacterInventoryRequest_1>(get_class());
        }
    } // namespace GetCharacterInventoryRequest_1
} // namespace app::classes::types
