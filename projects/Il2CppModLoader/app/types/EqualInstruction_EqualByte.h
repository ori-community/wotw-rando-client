#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualByte__Class** type_info;
        inline app::EqualInstruction_EqualByte__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualByte");
        }
        inline app::EqualInstruction_EqualByte* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualByte>(get_class());
        }
    } // namespace EqualInstruction_EqualByte
} // namespace app::classes::types
