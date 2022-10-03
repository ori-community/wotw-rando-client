#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageDealer_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageDealer_c__Class** type_info;
        inline app::DamageDealer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageDealer_c__Class>(type_info, "", "DamageDealer", "<>c");
        }
        inline app::DamageDealer_c* create() {
            return il2cpp::create_object<app::DamageDealer_c>(get_class());
        }
    } // namespace DamageDealer_c
} // namespace app::classes::types
