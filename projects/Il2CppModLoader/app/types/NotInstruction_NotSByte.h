#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotInstruction_NotSByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotInstruction_NotSByte__Class** type_info;
        inline app::NotInstruction_NotSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotInstruction", "NotSByte");
        }
        inline app::NotInstruction_NotSByte* create() {
            return il2cpp::create_object<app::NotInstruction_NotSByte>(get_class());
        }
    } // namespace NotInstruction_NotSByte
} // namespace app::classes::types
