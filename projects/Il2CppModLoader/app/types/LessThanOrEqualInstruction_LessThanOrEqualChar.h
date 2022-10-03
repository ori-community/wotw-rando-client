#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualChar {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LessThanOrEqualInstruction_LessThanOrEqualChar__Class** type_info;
        inline app::LessThanOrEqualInstruction_LessThanOrEqualChar__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualChar__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualChar");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualChar* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualChar>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualChar
} // namespace app::classes::types
