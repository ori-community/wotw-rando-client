#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddInstruction_AddUInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddInstruction_AddUInt32__Class** type_info;
        inline app::AddInstruction_AddUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction", "AddUInt32");
        }
        inline app::AddInstruction_AddUInt32* create() {
            return il2cpp::create_object<app::AddInstruction_AddUInt32>(get_class());
        }
    } // namespace AddInstruction_AddUInt32
} // namespace app::classes::types
