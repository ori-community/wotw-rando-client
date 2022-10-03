#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotEqualInstruction_NotEqualByte__Class** type_info;
        inline app::NotEqualInstruction_NotEqualByte__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualByte");
        }
        inline app::NotEqualInstruction_NotEqualByte* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualByte>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualByte
} // namespace app::classes::types
