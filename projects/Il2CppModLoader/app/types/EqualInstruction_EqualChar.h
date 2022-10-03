#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualChar {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualChar__Class** type_info;
        inline app::EqualInstruction_EqualChar__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualChar__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualChar");
        }
        inline app::EqualInstruction_EqualChar* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualChar>(get_class());
        }
    } // namespace EqualInstruction_EqualChar
} // namespace app::classes::types
