#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementDouble {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IncrementInstruction_IncrementDouble__Class** type_info;
        inline app::IncrementInstruction_IncrementDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementDouble");
        }
        inline app::IncrementInstruction_IncrementDouble* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementDouble>(get_class());
        }
    } // namespace IncrementInstruction_IncrementDouble
} // namespace app::classes::types
