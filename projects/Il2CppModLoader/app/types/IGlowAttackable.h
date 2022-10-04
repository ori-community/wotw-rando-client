#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGlowAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IGlowAttackable__Class** type_info;
        inline app::IGlowAttackable__Class* get_class() {
            return il2cpp::get_class<app::IGlowAttackable__Class>(type_info, "", "IGlowAttackable");
        }
        inline app::IGlowAttackable* create() {
            return il2cpp::create_object<app::IGlowAttackable>(get_class());
        }
    } // namespace IGlowAttackable
} // namespace app::classes::types
