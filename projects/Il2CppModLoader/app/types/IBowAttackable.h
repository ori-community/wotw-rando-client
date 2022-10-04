#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBowAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBowAttackable__Class** type_info;
        inline app::IBowAttackable__Class* get_class() {
            return il2cpp::get_class<app::IBowAttackable__Class>(type_info, "", "IBowAttackable");
        }
    } // namespace IBowAttackable
} // namespace app::classes::types
