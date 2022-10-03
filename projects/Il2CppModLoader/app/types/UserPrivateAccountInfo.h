#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserPrivateAccountInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserPrivateAccountInfo__Class** type_info;
        inline app::UserPrivateAccountInfo__Class* get_class() {
            return il2cpp::get_class<app::UserPrivateAccountInfo__Class>(type_info, "PlayFab.ClientModels", "UserPrivateAccountInfo");
        }
        inline app::UserPrivateAccountInfo* create() {
            return il2cpp::create_object<app::UserPrivateAccountInfo>(get_class());
        }
    } // namespace UserPrivateAccountInfo
} // namespace app::classes::types
