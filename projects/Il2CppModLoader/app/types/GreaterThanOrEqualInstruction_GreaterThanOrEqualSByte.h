#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class** type_info;
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualSByte");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte
} // namespace app::classes::types
