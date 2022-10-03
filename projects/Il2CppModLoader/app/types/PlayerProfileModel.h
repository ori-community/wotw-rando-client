#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerProfileModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerProfileModel__Class** type_info;
        inline app::PlayerProfileModel__Class* get_class() {
            return il2cpp::get_class<app::PlayerProfileModel__Class>(type_info, "PlayFab.ClientModels", "PlayerProfileModel");
        }
        inline app::PlayerProfileModel* create() {
            return il2cpp::create_object<app::PlayerProfileModel>(get_class());
        }
    } // namespace PlayerProfileModel
} // namespace app::classes::types
