#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITrapAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITrapAttackable__Class** type_info;
        inline app::ITrapAttackable__Class* get_class() {
            return il2cpp::get_class<app::ITrapAttackable__Class>(type_info, "", "ITrapAttackable");
        }
    } // namespace ITrapAttackable
} // namespace app::classes::types
