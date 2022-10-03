#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle__Class** type_info;
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualSingle");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle
} // namespace app::classes::types
