#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddInstruction_AddInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddInstruction_AddInt64__Class** type_info;
        inline app::AddInstruction_AddInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction", "AddInt64");
        }
        inline app::AddInstruction_AddInt64* create() {
            return il2cpp::create_object<app::AddInstruction_AddInt64>(get_class());
        }
    } // namespace AddInstruction_AddInt64
} // namespace app::classes::types
