#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeleteCharacterFromUserRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeleteCharacterFromUserRequest__Class** type_info;
        inline app::DeleteCharacterFromUserRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteCharacterFromUserRequest__Class>(type_info, "PlayFab.ServerModels", "DeleteCharacterFromUserRequest");
        }
        inline app::DeleteCharacterFromUserRequest* create() {
            return il2cpp::create_object<app::DeleteCharacterFromUserRequest>(get_class());
        }
    } // namespace DeleteCharacterFromUserRequest
} // namespace app::classes::types
