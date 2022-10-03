#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinBashAttack {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinBashAttack__Class** type_info;
        inline app::SeinBashAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinBashAttack__Class>(type_info, "", "SeinBashAttack");
        }
        inline app::SeinBashAttack* create() {
            return il2cpp::create_object<app::SeinBashAttack>(get_class());
        }
    } // namespace SeinBashAttack
} // namespace app::classes::types
