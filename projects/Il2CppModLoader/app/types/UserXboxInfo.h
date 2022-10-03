#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserXboxInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserXboxInfo__Class** type_info;
        inline app::UserXboxInfo__Class* get_class() {
            return il2cpp::get_class<app::UserXboxInfo__Class>(type_info, "PlayFab.ClientModels", "UserXboxInfo");
        }
        inline app::UserXboxInfo* create() {
            return il2cpp::create_object<app::UserXboxInfo>(get_class());
        }
    } // namespace UserXboxInfo
} // namespace app::classes::types
