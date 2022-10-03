#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateAbilities_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateAbilities_c__Class** type_info;
        inline app::PlayerUberStateAbilities_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateAbilities_c__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateAbilities", "<>c");
        }
        inline app::PlayerUberStateAbilities_c* create() {
            return il2cpp::create_object<app::PlayerUberStateAbilities_c>(get_class());
        }
    } // namespace PlayerUberStateAbilities_c
} // namespace app::classes::types
