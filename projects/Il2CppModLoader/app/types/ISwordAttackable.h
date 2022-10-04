#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISwordAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISwordAttackable__Class** type_info;
        inline app::ISwordAttackable__Class* get_class() {
            return il2cpp::get_class<app::ISwordAttackable__Class>(type_info, "", "ISwordAttackable");
        }
    } // namespace ISwordAttackable
} // namespace app::classes::types
