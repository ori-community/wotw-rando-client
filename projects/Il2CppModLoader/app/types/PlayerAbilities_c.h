#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerAbilities_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerAbilities_c__Class** type_info;
        inline app::PlayerAbilities_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerAbilities_c__Class>(type_info, "", "PlayerAbilities", "<>c");
        }
        inline app::PlayerAbilities_c* create() {
            return il2cpp::create_object<app::PlayerAbilities_c>(get_class());
        }
    } // namespace PlayerAbilities_c
} // namespace app::classes::types
