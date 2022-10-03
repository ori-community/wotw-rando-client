#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementDouble {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecrementInstruction_DecrementDouble__Class** type_info;
        inline app::DecrementInstruction_DecrementDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementDouble");
        }
        inline app::DecrementInstruction_DecrementDouble* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementDouble>(get_class());
        }
    } // namespace DecrementInstruction_DecrementDouble
} // namespace app::classes::types
