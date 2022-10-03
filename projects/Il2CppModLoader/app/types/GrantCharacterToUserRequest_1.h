#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrantCharacterToUserRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrantCharacterToUserRequest_1__Class** type_info;
        inline app::GrantCharacterToUserRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GrantCharacterToUserRequest_1__Class>(type_info, "PlayFab.ServerModels", "GrantCharacterToUserRequest");
        }
        inline app::GrantCharacterToUserRequest_1* create() {
            return il2cpp::create_object<app::GrantCharacterToUserRequest_1>(get_class());
        }
    } // namespace GrantCharacterToUserRequest_1
} // namespace app::classes::types
