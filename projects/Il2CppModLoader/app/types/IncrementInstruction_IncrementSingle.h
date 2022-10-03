#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementSingle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IncrementInstruction_IncrementSingle__Class** type_info;
        inline app::IncrementInstruction_IncrementSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementSingle");
        }
        inline app::IncrementInstruction_IncrementSingle* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementSingle>(get_class());
        }
    } // namespace IncrementInstruction_IncrementSingle
} // namespace app::classes::types
