#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveItemToCharacterFromCharacterRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoveItemToCharacterFromCharacterRequest__Class** type_info;
        inline app::MoveItemToCharacterFromCharacterRequest__Class* get_class() {
            return il2cpp::get_class<app::MoveItemToCharacterFromCharacterRequest__Class>(type_info, "PlayFab.ServerModels", "MoveItemToCharacterFromCharacterRequest");
        }
        inline app::MoveItemToCharacterFromCharacterRequest* create() {
            return il2cpp::create_object<app::MoveItemToCharacterFromCharacterRequest>(get_class());
        }
    } // namespace MoveItemToCharacterFromCharacterRequest
} // namespace app::classes::types
