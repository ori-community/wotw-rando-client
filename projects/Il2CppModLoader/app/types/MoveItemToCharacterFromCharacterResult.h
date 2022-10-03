#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveItemToCharacterFromCharacterResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoveItemToCharacterFromCharacterResult__Class** type_info;
        inline app::MoveItemToCharacterFromCharacterResult__Class* get_class() {
            return il2cpp::get_class<app::MoveItemToCharacterFromCharacterResult__Class>(type_info, "PlayFab.ServerModels", "MoveItemToCharacterFromCharacterResult");
        }
        inline app::MoveItemToCharacterFromCharacterResult* create() {
            return il2cpp::create_object<app::MoveItemToCharacterFromCharacterResult>(get_class());
        }
    } // namespace MoveItemToCharacterFromCharacterResult
} // namespace app::classes::types
