#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinBashAttackPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinBashAttackPuppet__Class** type_info;
        inline app::SeinBashAttackPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinBashAttackPuppet__Class>(type_info, "", "SeinBashAttackPuppet");
        }
        inline app::SeinBashAttackPuppet* create() {
            return il2cpp::create_object<app::SeinBashAttackPuppet>(get_class());
        }
    } // namespace SeinBashAttackPuppet
} // namespace app::classes::types
