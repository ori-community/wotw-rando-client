#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanDouble {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LessThanInstruction_LessThanDouble__Class** type_info;
        inline app::LessThanInstruction_LessThanDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanDouble");
        }
        inline app::LessThanInstruction_LessThanDouble* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanDouble>(get_class());
        }
    } // namespace LessThanInstruction_LessThanDouble
} // namespace app::classes::types
