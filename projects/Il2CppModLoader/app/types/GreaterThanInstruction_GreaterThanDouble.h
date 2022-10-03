#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanDouble {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GreaterThanInstruction_GreaterThanDouble__Class** type_info;
        inline app::GreaterThanInstruction_GreaterThanDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanDouble");
        }
        inline app::GreaterThanInstruction_GreaterThanDouble* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanDouble>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanDouble
} // namespace app::classes::types
