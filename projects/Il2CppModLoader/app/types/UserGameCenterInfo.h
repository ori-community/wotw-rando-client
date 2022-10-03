#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserGameCenterInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserGameCenterInfo__Class** type_info;
        inline app::UserGameCenterInfo__Class* get_class() {
            return il2cpp::get_class<app::UserGameCenterInfo__Class>(type_info, "PlayFab.ClientModels", "UserGameCenterInfo");
        }
        inline app::UserGameCenterInfo* create() {
            return il2cpp::create_object<app::UserGameCenterInfo>(get_class());
        }
    } // namespace UserGameCenterInfo
} // namespace app::classes::types
