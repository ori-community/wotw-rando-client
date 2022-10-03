#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinBashAttack_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinBashAttack_c__Class** type_info;
        inline app::SeinBashAttack_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBashAttack_c__Class>(type_info, "", "SeinBashAttack", "<>c");
        }
        inline app::SeinBashAttack_c* create() {
            return il2cpp::create_object<app::SeinBashAttack_c>(get_class());
        }
    } // namespace SeinBashAttack_c
} // namespace app::classes::types
