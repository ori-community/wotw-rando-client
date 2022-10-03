#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveItemToCharacterFromUserRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoveItemToCharacterFromUserRequest__Class** type_info;
        inline app::MoveItemToCharacterFromUserRequest__Class* get_class() {
            return il2cpp::get_class<app::MoveItemToCharacterFromUserRequest__Class>(type_info, "PlayFab.ServerModels", "MoveItemToCharacterFromUserRequest");
        }
        inline app::MoveItemToCharacterFromUserRequest* create() {
            return il2cpp::create_object<app::MoveItemToCharacterFromUserRequest>(get_class());
        }
    } // namespace MoveItemToCharacterFromUserRequest
} // namespace app::classes::types
