#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeftShiftInstruction_LeftShiftInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeftShiftInstruction_LeftShiftInt32__Class** type_info;
        inline app::LeftShiftInstruction_LeftShiftInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftShiftInstruction_LeftShiftInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction", "LeftShiftInt32");
        }
        inline app::LeftShiftInstruction_LeftShiftInt32* create() {
            return il2cpp::create_object<app::LeftShiftInstruction_LeftShiftInt32>(get_class());
        }
    } // namespace LeftShiftInstruction_LeftShiftInt32
} // namespace app::classes::types
