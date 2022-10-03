#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualChar {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotEqualInstruction_NotEqualChar__Class** type_info;
        inline app::NotEqualInstruction_NotEqualChar__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualChar__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualChar");
        }
        inline app::NotEqualInstruction_NotEqualChar* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualChar>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualChar
} // namespace app::classes::types
