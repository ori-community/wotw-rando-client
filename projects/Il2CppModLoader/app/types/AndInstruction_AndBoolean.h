#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AndInstruction_AndBoolean {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AndInstruction_AndBoolean__Class** type_info;
        inline app::AndInstruction_AndBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndBoolean__Class>(type_info, "System.Linq.Expressions.Interpreter", "AndInstruction", "AndBoolean");
        }
        inline app::AndInstruction_AndBoolean* create() {
            return il2cpp::create_object<app::AndInstruction_AndBoolean>(get_class());
        }
    } // namespace AndInstruction_AndBoolean
} // namespace app::classes::types
