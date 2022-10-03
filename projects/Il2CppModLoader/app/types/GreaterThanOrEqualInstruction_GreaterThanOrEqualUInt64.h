#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64__Class** type_info;
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualUInt64");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64
} // namespace app::classes::types
