#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeftShiftInstruction_LeftShiftUInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeftShiftInstruction_LeftShiftUInt64__Class** type_info;
        inline app::LeftShiftInstruction_LeftShiftUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftShiftInstruction_LeftShiftUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction", "LeftShiftUInt64");
        }
        inline app::LeftShiftInstruction_LeftShiftUInt64* create() {
            return il2cpp::create_object<app::LeftShiftInstruction_LeftShiftUInt64>(get_class());
        }
    } // namespace LeftShiftInstruction_LeftShiftUInt64
} // namespace app::classes::types
