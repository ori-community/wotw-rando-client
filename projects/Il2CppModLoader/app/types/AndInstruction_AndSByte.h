#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AndInstruction_AndSByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AndInstruction_AndSByte__Class** type_info;
        inline app::AndInstruction_AndSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "AndInstruction", "AndSByte");
        }
        inline app::AndInstruction_AndSByte* create() {
            return il2cpp::create_object<app::AndInstruction_AndSByte>(get_class());
        }
    } // namespace AndInstruction_AndSByte
} // namespace app::classes::types
