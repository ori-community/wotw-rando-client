#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AndInstruction_AndUInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AndInstruction_AndUInt64__Class** type_info;
        inline app::AndInstruction_AndUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "AndInstruction", "AndUInt64");
        }
        inline app::AndInstruction_AndUInt64* create() {
            return il2cpp::create_object<app::AndInstruction_AndUInt64>(get_class());
        }
    } // namespace AndInstruction_AndUInt64
} // namespace app::classes::types
