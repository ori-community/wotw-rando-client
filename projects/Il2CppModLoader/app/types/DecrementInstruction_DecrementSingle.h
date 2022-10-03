#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementSingle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecrementInstruction_DecrementSingle__Class** type_info;
        inline app::DecrementInstruction_DecrementSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementSingle");
        }
        inline app::DecrementInstruction_DecrementSingle* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementSingle>(get_class());
        }
    } // namespace DecrementInstruction_DecrementSingle
} // namespace app::classes::types
