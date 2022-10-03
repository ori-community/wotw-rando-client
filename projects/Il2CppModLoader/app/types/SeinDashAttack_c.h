#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDashAttack_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDashAttack_c__Class** type_info;
        inline app::SeinDashAttack_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDashAttack_c__Class>(type_info, "", "SeinDashAttack", "<>c");
        }
        inline app::SeinDashAttack_c* create() {
            return il2cpp::create_object<app::SeinDashAttack_c>(get_class());
        }
    } // namespace SeinDashAttack_c
} // namespace app::classes::types
