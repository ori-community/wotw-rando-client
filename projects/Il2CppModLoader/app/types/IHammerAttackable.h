#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IHammerAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IHammerAttackable__Class** type_info;
        inline app::IHammerAttackable__Class* get_class() {
            return il2cpp::get_class<app::IHammerAttackable__Class>(type_info, "", "IHammerAttackable");
        }
    } // namespace IHammerAttackable
} // namespace app::classes::types
