#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerPuppetAbilities {
        namespace {
            app::PlayerPuppetAbilities__Class* type_info_ref = nullptr;
        }
        app::PlayerPuppetAbilities__Class** type_info = &type_info_ref;
        inline app::PlayerPuppetAbilities__Class* get_class() {
            return il2cpp::get_class<app::PlayerPuppetAbilities__Class>(type_info, "", "PlayerPuppetAbilities");
        }
        inline app::PlayerPuppetAbilities* create() {
            return il2cpp::create_object<app::PlayerPuppetAbilities>(get_class());
        }
    } // namespace PlayerPuppetAbilities
} // namespace app::classes::types
