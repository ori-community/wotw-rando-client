#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AndInstruction_AndUInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AndInstruction_AndUInt32__Class** type_info;
        inline app::AndInstruction_AndUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "AndInstruction", "AndUInt32");
        }
        inline app::AndInstruction_AndUInt32* create() {
            return il2cpp::create_object<app::AndInstruction_AndUInt32>(get_class());
        }
    } // namespace AndInstruction_AndUInt32
} // namespace app::classes::types
