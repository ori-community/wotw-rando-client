#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddInstruction_AddUInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddInstruction_AddUInt64__Class** type_info;
        inline app::AddInstruction_AddUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction", "AddUInt64");
        }
        inline app::AddInstruction_AddUInt64* create() {
            return il2cpp::create_object<app::AddInstruction_AddUInt64>(get_class());
        }
    } // namespace AddInstruction_AddUInt64
} // namespace app::classes::types
