#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttackTokenPriority__Enum__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttackTokenPriority__Enum__Array__Class** type_info;
        inline app::AttackTokenPriority__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::AttackTokenPriority__Enum__Array__Class>(type_info, "", "AttackTokenPriority[]");
        }
        inline app::AttackTokenPriority__Enum__Array* create() {
            return il2cpp::create_object<app::AttackTokenPriority__Enum__Array>(get_class());
        }
    } // namespace AttackTokenPriority__Enum__Array
} // namespace app::classes::types
