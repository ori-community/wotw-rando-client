#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrantItemsToCharacterResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrantItemsToCharacterResult__Class** type_info;
        inline app::GrantItemsToCharacterResult__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToCharacterResult__Class>(type_info, "PlayFab.ServerModels", "GrantItemsToCharacterResult");
        }
        inline app::GrantItemsToCharacterResult* create() {
            return il2cpp::create_object<app::GrantItemsToCharacterResult>(get_class());
        }
    } // namespace GrantItemsToCharacterResult
} // namespace app::classes::types
