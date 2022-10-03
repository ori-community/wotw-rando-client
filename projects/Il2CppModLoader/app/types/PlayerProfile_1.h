#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerProfile_1 {
        namespace {
            app::PlayerProfile_1__Class* type_info_ref = nullptr;
        }
        app::PlayerProfile_1__Class** type_info = &type_info_ref;
        inline app::PlayerProfile_1__Class* get_class() {
            return il2cpp::get_class<app::PlayerProfile_1__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerProfile");
        }
        inline app::PlayerProfile_1* create() {
            return il2cpp::create_object<app::PlayerProfile_1>(get_class());
        }
    } // namespace PlayerProfile_1
} // namespace app::classes::types
