#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicalSystemState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicalSystemState__Class** type_info;
        inline app::PhysicalSystemState__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSystemState__Class>(type_info, "", "PhysicalSystemState");
        }
        inline app::PhysicalSystemState* create() {
            return il2cpp::create_object<app::PhysicalSystemState>(get_class());
        }
        inline app::PhysicalSystemState__Array* create_array(int size) {
            return il2cpp::array_new<app::PhysicalSystemState__Array>(get_class(), size);
        }
    } // namespace PhysicalSystemState
} // namespace app::classes::types
