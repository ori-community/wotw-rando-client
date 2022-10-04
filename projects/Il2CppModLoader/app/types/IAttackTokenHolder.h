#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAttackTokenHolder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAttackTokenHolder__Class** type_info;
        inline app::IAttackTokenHolder__Class* get_class() {
            return il2cpp::get_class<app::IAttackTokenHolder__Class>(type_info, "", "IAttackTokenHolder");
        }
        inline app::IAttackTokenHolder* create() {
            return il2cpp::create_object<app::IAttackTokenHolder>(get_class());
        }
    } // namespace IAttackTokenHolder
} // namespace app::classes::types
