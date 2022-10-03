#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeftShiftInstruction_LeftShiftSByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeftShiftInstruction_LeftShiftSByte__Class** type_info;
        inline app::LeftShiftInstruction_LeftShiftSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftShiftInstruction_LeftShiftSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction", "LeftShiftSByte");
        }
        inline app::LeftShiftInstruction_LeftShiftSByte* create() {
            return il2cpp::create_object<app::LeftShiftInstruction_LeftShiftSByte>(get_class());
        }
    } // namespace LeftShiftInstruction_LeftShiftSByte
} // namespace app::classes::types
