#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeftShiftInstruction_LeftShiftByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeftShiftInstruction_LeftShiftByte__Class** type_info;
        inline app::LeftShiftInstruction_LeftShiftByte__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftShiftInstruction_LeftShiftByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction", "LeftShiftByte");
        }
        inline app::LeftShiftInstruction_LeftShiftByte* create() {
            return il2cpp::create_object<app::LeftShiftInstruction_LeftShiftByte>(get_class());
        }
    } // namespace LeftShiftInstruction_LeftShiftByte
} // namespace app::classes::types
