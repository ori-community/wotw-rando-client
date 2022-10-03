#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanSingle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GreaterThanInstruction_GreaterThanSingle__Class** type_info;
        inline app::GreaterThanInstruction_GreaterThanSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanSingle");
        }
        inline app::GreaterThanInstruction_GreaterThanSingle* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanSingle>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanSingle
} // namespace app::classes::types
