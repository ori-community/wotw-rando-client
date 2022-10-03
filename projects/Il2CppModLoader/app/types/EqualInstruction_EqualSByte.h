#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualSByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualSByte__Class** type_info;
        inline app::EqualInstruction_EqualSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualSByte");
        }
        inline app::EqualInstruction_EqualSByte* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualSByte>(get_class());
        }
    } // namespace EqualInstruction_EqualSByte
} // namespace app::classes::types
