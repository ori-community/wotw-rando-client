#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddInstruction_AddInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddInstruction_AddInt32__Class** type_info;
        inline app::AddInstruction_AddInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction", "AddInt32");
        }
        inline app::AddInstruction_AddInt32* create() {
            return il2cpp::create_object<app::AddInstruction_AddInt32>(get_class());
        }
    } // namespace AddInstruction_AddInt32
} // namespace app::classes::types
