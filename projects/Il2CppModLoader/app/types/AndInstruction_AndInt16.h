#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AndInstruction_AndInt16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AndInstruction_AndInt16__Class** type_info;
        inline app::AndInstruction_AndInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "AndInstruction", "AndInt16");
        }
        inline app::AndInstruction_AndInt16* create() {
            return il2cpp::create_object<app::AndInstruction_AndInt16>(get_class());
        }
    } // namespace AndInstruction_AndInt16
} // namespace app::classes::types
