#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpShotShield_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JumpShotShield_c__Class** type_info;
        inline app::JumpShotShield_c__Class* get_class() {
            return il2cpp::get_nested_class<app::JumpShotShield_c__Class>(type_info, "", "JumpShotShield", "<>c");
        }
        inline app::JumpShotShield_c* create() {
            return il2cpp::create_object<app::JumpShotShield_c>(get_class());
        }
    } // namespace JumpShotShield_c
} // namespace app::classes::types
