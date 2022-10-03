#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttackableSwitch_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttackableSwitch_c__Class** type_info;
        inline app::AttackableSwitch_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AttackableSwitch_c__Class>(type_info, "", "AttackableSwitch", "<>c");
        }
        inline app::AttackableSwitch_c* create() {
            return il2cpp::create_object<app::AttackableSwitch_c>(get_class());
        }
    } // namespace AttackableSwitch_c
} // namespace app::classes::types
