#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrantCharacterToUserResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrantCharacterToUserResult_1__Class** type_info;
        inline app::GrantCharacterToUserResult_1__Class* get_class() {
            return il2cpp::get_class<app::GrantCharacterToUserResult_1__Class>(type_info, "PlayFab.ServerModels", "GrantCharacterToUserResult");
        }
        inline app::GrantCharacterToUserResult_1* create() {
            return il2cpp::create_object<app::GrantCharacterToUserResult_1>(get_class());
        }
    } // namespace GrantCharacterToUserResult_1
} // namespace app::classes::types
