#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerProfileViewConstraints {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerProfileViewConstraints__Class** type_info;
        inline app::PlayerProfileViewConstraints__Class* get_class() {
            return il2cpp::get_class<app::PlayerProfileViewConstraints__Class>(type_info, "PlayFab.ClientModels", "PlayerProfileViewConstraints");
        }
        inline app::PlayerProfileViewConstraints* create() {
            return il2cpp::create_object<app::PlayerProfileViewConstraints>(get_class());
        }
    } // namespace PlayerProfileViewConstraints
} // namespace app::classes::types
