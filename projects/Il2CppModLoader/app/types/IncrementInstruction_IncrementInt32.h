#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IncrementInstruction_IncrementInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IncrementInstruction_IncrementInt32__Class** type_info;
        inline app::IncrementInstruction_IncrementInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::IncrementInstruction_IncrementInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "IncrementInstruction", "IncrementInt32");
        }
        inline app::IncrementInstruction_IncrementInt32* create() {
            return il2cpp::create_object<app::IncrementInstruction_IncrementInt32>(get_class());
        }
    } // namespace IncrementInstruction_IncrementInt32
} // namespace app::classes::types
