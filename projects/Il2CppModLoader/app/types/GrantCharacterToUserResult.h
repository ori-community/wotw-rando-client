#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrantCharacterToUserResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrantCharacterToUserResult__Class** type_info;
        inline app::GrantCharacterToUserResult__Class* get_class() {
            return il2cpp::get_class<app::GrantCharacterToUserResult__Class>(type_info, "PlayFab.ClientModels", "GrantCharacterToUserResult");
        }
        inline app::GrantCharacterToUserResult* create() {
            return il2cpp::create_object<app::GrantCharacterToUserResult>(get_class());
        }
    } // namespace GrantCharacterToUserResult
} // namespace app::classes::types
