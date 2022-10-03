#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AndInstruction_AndByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AndInstruction_AndByte__Class** type_info;
        inline app::AndInstruction_AndByte__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "AndInstruction", "AndByte");
        }
        inline app::AndInstruction_AndByte* create() {
            return il2cpp::create_object<app::AndInstruction_AndByte>(get_class());
        }
    } // namespace AndInstruction_AndByte
} // namespace app::classes::types
