#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerAbilityStatePair {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerAbilityStatePair__Class** type_info;
        inline app::PlayerAbilityStatePair__Class* get_class() {
            return il2cpp::get_class<app::PlayerAbilityStatePair__Class>(type_info, "Moon.uberSerializationWisp", "PlayerAbilityStatePair");
        }
        inline app::PlayerAbilityStatePair* create() {
            return il2cpp::create_object<app::PlayerAbilityStatePair>(get_class());
        }
    } // namespace PlayerAbilityStatePair
} // namespace app::classes::types
