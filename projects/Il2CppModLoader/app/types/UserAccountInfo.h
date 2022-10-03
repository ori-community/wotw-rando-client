#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserAccountInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserAccountInfo__Class** type_info;
        inline app::UserAccountInfo__Class* get_class() {
            return il2cpp::get_class<app::UserAccountInfo__Class>(type_info, "PlayFab.ClientModels", "UserAccountInfo");
        }
        inline app::UserAccountInfo* create() {
            return il2cpp::create_object<app::UserAccountInfo>(get_class());
        }
    } // namespace UserAccountInfo
} // namespace app::classes::types
