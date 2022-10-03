#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RightShiftInstruction_RightShiftByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RightShiftInstruction_RightShiftByte__Class** type_info;
        inline app::RightShiftInstruction_RightShiftByte__Class* get_class() {
            return il2cpp::get_nested_class<app::RightShiftInstruction_RightShiftByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "RightShiftInstruction", "RightShiftByte");
        }
        inline app::RightShiftInstruction_RightShiftByte* create() {
            return il2cpp::create_object<app::RightShiftInstruction_RightShiftByte>(get_class());
        }
    } // namespace RightShiftInstruction_RightShiftByte
} // namespace app::classes::types
