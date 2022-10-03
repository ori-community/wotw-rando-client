#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageType__Enum__Class** type_info;
        inline app::DamageType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageType__Enum__Class>(type_info, "", "DamageType");
        }
        inline app::DamageType__Enum* create() {
            return il2cpp::create_object<app::DamageType__Enum>(get_class());
        }
        inline app::DamageType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageType__Enum__Array>(get_class(), size);
        }
    } // namespace DamageType__Enum
} // namespace app::classes::types
