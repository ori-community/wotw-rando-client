#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageWeight__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageWeight__Enum__Class** type_info;
        inline app::DamageWeight__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageWeight__Enum__Class>(type_info, "", "DamageWeight");
        }
        inline app::DamageWeight__Enum* create() {
            return il2cpp::create_object<app::DamageWeight__Enum>(get_class());
        }
        inline app::DamageWeight__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageWeight__Enum__Array>(get_class(), size);
        }
    } // namespace DamageWeight__Enum
} // namespace app::classes::types
