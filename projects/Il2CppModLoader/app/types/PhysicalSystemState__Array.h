#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicalSystemState__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicalSystemState__Array__Class** type_info;
        inline app::PhysicalSystemState__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSystemState__Array__Class>(type_info, "", "PhysicalSystemState[]");
        }
        inline app::PhysicalSystemState__Array* create() {
            return il2cpp::create_object<app::PhysicalSystemState__Array>(get_class());
        }
    } // namespace PhysicalSystemState__Array
} // namespace app::classes::types
