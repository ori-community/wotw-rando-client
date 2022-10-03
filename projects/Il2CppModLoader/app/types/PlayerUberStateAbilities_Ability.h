#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateAbilities_Ability {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateAbilities_Ability__Class** type_info;
        inline app::PlayerUberStateAbilities_Ability__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateAbilities_Ability__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateAbilities", "Ability");
        }
        inline app::PlayerUberStateAbilities_Ability* create() {
            return il2cpp::create_object<app::PlayerUberStateAbilities_Ability>(get_class());
        }
        inline app::PlayerUberStateAbilities_Ability__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerUberStateAbilities_Ability__Array>(get_class(), size);
        }
    } // namespace PlayerUberStateAbilities_Ability
} // namespace app::classes::types
