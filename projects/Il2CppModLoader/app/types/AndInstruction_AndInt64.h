#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AndInstruction_AndInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AndInstruction_AndInt64__Class** type_info;
        inline app::AndInstruction_AndInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "AndInstruction", "AndInt64");
        }
        inline app::AndInstruction_AndInt64* create() {
            return il2cpp::create_object<app::AndInstruction_AndInt64>(get_class());
        }
    } // namespace AndInstruction_AndInt64
} // namespace app::classes::types
