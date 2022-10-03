#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinBowAttack {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinBowAttack__Class** type_info;
        inline app::SeinBowAttack__Class* get_class() {
            return il2cpp::get_class<app::SeinBowAttack__Class>(type_info, "", "SeinBowAttack");
        }
        inline app::SeinBowAttack* create() {
            return il2cpp::create_object<app::SeinBowAttack>(get_class());
        }
    } // namespace SeinBowAttack
} // namespace app::classes::types
