#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualSByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LessThanOrEqualInstruction_LessThanOrEqualSByte__Class** type_info;
        inline app::LessThanOrEqualInstruction_LessThanOrEqualSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualSByte");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualSByte* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualSByte>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualSByte
} // namespace app::classes::types
