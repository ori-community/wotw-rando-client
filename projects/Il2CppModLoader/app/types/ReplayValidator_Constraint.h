#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReplayValidator_Constraint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReplayValidator_Constraint__Class** type_info;
        inline app::ReplayValidator_Constraint__Class* get_class() {
            return il2cpp::get_nested_class<app::ReplayValidator_Constraint__Class>(type_info, "Moon.Race", "ReplayValidator", "Constraint");
        }
        inline app::ReplayValidator_Constraint* create() {
            return il2cpp::create_object<app::ReplayValidator_Constraint>(get_class());
        }
        inline app::ReplayValidator_Constraint__Array* create_array(int size) {
            return il2cpp::array_new<app::ReplayValidator_Constraint__Array>(get_class(), size);
        }
    } // namespace ReplayValidator_Constraint
} // namespace app::classes::types
