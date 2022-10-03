#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageDealer__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageDealer__Array__Class** type_info;
        inline app::DamageDealer__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageDealer__Array__Class>(type_info, "", "DamageDealer[]");
        }
        inline app::DamageDealer__Array* create() {
            return il2cpp::create_object<app::DamageDealer__Array>(get_class());
        }
    } // namespace DamageDealer__Array
} // namespace app::classes::types
