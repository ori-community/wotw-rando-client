#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NegateInstruction_NegateSingle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NegateInstruction_NegateSingle__Class** type_info;
        inline app::NegateInstruction_NegateSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateInstruction_NegateSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "NegateInstruction", "NegateSingle");
        }
        inline app::NegateInstruction_NegateSingle* create() {
            return il2cpp::create_object<app::NegateInstruction_NegateSingle>(get_class());
        }
    } // namespace NegateInstruction_NegateSingle
} // namespace app::classes::types
