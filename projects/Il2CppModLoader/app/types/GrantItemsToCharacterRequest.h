#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrantItemsToCharacterRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrantItemsToCharacterRequest__Class** type_info;
        inline app::GrantItemsToCharacterRequest__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToCharacterRequest__Class>(type_info, "PlayFab.ServerModels", "GrantItemsToCharacterRequest");
        }
        inline app::GrantItemsToCharacterRequest* create() {
            return il2cpp::create_object<app::GrantItemsToCharacterRequest>(get_class());
        }
    } // namespace GrantItemsToCharacterRequest
} // namespace app::classes::types
