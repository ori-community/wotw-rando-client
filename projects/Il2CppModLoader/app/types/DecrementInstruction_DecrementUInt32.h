#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecrementInstruction_DecrementUInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecrementInstruction_DecrementUInt32__Class** type_info;
        inline app::DecrementInstruction_DecrementUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::DecrementInstruction_DecrementUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "DecrementInstruction", "DecrementUInt32");
        }
        inline app::DecrementInstruction_DecrementUInt32* create() {
            return il2cpp::create_object<app::DecrementInstruction_DecrementUInt32>(get_class());
        }
    } // namespace DecrementInstruction_DecrementUInt32
} // namespace app::classes::types
