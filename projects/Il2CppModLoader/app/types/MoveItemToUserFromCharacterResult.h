#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveItemToUserFromCharacterResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoveItemToUserFromCharacterResult__Class** type_info;
        inline app::MoveItemToUserFromCharacterResult__Class* get_class() {
            return il2cpp::get_class<app::MoveItemToUserFromCharacterResult__Class>(type_info, "PlayFab.ServerModels", "MoveItemToUserFromCharacterResult");
        }
        inline app::MoveItemToUserFromCharacterResult* create() {
            return il2cpp::create_object<app::MoveItemToUserFromCharacterResult>(get_class());
        }
    } // namespace MoveItemToUserFromCharacterResult
} // namespace app::classes::types
