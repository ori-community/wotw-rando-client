#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttackTokens {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttackTokens__Class** type_info;
        inline app::AttackTokens__Class* get_class() {
            return il2cpp::get_class<app::AttackTokens__Class>(type_info, "", "AttackTokens");
        }
        inline app::AttackTokens* create() {
            return il2cpp::create_object<app::AttackTokens>(get_class());
        }
    } // namespace AttackTokens
} // namespace app::classes::types
