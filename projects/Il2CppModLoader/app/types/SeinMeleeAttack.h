#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinMeleeAttack {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinMeleeAttack__Class** type_info;
        inline app::SeinMeleeAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinMeleeAttack__Class>(type_info, "", "SeinMeleeAttack");
        }
        inline app::SeinMeleeAttack* create() {
            return il2cpp::create_object<app::SeinMeleeAttack>(get_class());
        }
    } // namespace SeinMeleeAttack
} // namespace app::classes::types
