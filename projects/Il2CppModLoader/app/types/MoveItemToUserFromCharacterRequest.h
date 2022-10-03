#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveItemToUserFromCharacterRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoveItemToUserFromCharacterRequest__Class** type_info;
        inline app::MoveItemToUserFromCharacterRequest__Class* get_class() {
            return il2cpp::get_class<app::MoveItemToUserFromCharacterRequest__Class>(type_info, "PlayFab.ServerModels", "MoveItemToUserFromCharacterRequest");
        }
        inline app::MoveItemToUserFromCharacterRequest* create() {
            return il2cpp::create_object<app::MoveItemToUserFromCharacterRequest>(get_class());
        }
    } // namespace MoveItemToUserFromCharacterRequest
} // namespace app::classes::types
