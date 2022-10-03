#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualSByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotEqualInstruction_NotEqualSByte__Class** type_info;
        inline app::NotEqualInstruction_NotEqualSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualSByte");
        }
        inline app::NotEqualInstruction_NotEqualSByte* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualSByte>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualSByte
} // namespace app::classes::types
