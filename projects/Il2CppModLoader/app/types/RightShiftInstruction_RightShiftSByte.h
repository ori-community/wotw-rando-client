#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RightShiftInstruction_RightShiftSByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RightShiftInstruction_RightShiftSByte__Class** type_info;
        inline app::RightShiftInstruction_RightShiftSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::RightShiftInstruction_RightShiftSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "RightShiftInstruction", "RightShiftSByte");
        }
        inline app::RightShiftInstruction_RightShiftSByte* create() {
            return il2cpp::create_object<app::RightShiftInstruction_RightShiftSByte>(get_class());
        }
    } // namespace RightShiftInstruction_RightShiftSByte
} // namespace app::classes::types
