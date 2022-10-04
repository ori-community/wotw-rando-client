#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISwarmAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISwarmAttackable__Class** type_info;
        inline app::ISwarmAttackable__Class* get_class() {
            return il2cpp::get_class<app::ISwarmAttackable__Class>(type_info, "", "ISwarmAttackable");
        }
        inline app::ISwarmAttackable* create() {
            return il2cpp::create_object<app::ISwarmAttackable>(get_class());
        }
    } // namespace ISwarmAttackable
} // namespace app::classes::types
