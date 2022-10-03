#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserFacebookInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserFacebookInfo__Class** type_info;
        inline app::UserFacebookInfo__Class* get_class() {
            return il2cpp::get_class<app::UserFacebookInfo__Class>(type_info, "PlayFab.ClientModels", "UserFacebookInfo");
        }
        inline app::UserFacebookInfo* create() {
            return il2cpp::create_object<app::UserFacebookInfo>(get_class());
        }
    } // namespace UserFacebookInfo
} // namespace app::classes::types
