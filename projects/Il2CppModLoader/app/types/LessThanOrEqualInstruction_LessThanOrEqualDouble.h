#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualDouble {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LessThanOrEqualInstruction_LessThanOrEqualDouble__Class** type_info;
        inline app::LessThanOrEqualInstruction_LessThanOrEqualDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualDouble");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualDouble* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualDouble>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualDouble
} // namespace app::classes::types
