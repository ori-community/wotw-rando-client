#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NegateInstruction_NegateDouble {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NegateInstruction_NegateDouble__Class** type_info;
        inline app::NegateInstruction_NegateDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateInstruction_NegateDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "NegateInstruction", "NegateDouble");
        }
        inline app::NegateInstruction_NegateDouble* create() {
            return il2cpp::create_object<app::NegateInstruction_NegateDouble>(get_class());
        }
    } // namespace NegateInstruction_NegateDouble
} // namespace app::classes::types
