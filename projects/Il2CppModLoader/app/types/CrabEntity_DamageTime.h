#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrabEntity_DamageTime {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrabEntity_DamageTime__Class** type_info;
        inline app::CrabEntity_DamageTime__Class* get_class() {
            return il2cpp::get_nested_class<app::CrabEntity_DamageTime__Class>(type_info, "", "CrabEntity", "DamageTime");
        }
        inline app::CrabEntity_DamageTime* create() {
            return il2cpp::create_object<app::CrabEntity_DamageTime>(get_class());
        }
        inline app::CrabEntity_DamageTime__Array* create_array(int size) {
            return il2cpp::array_new<app::CrabEntity_DamageTime__Array>(get_class(), size);
        }
    } // namespace CrabEntity_DamageTime
} // namespace app::classes::types
