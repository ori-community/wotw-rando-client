#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanChar {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LessThanInstruction_LessThanChar__Class** type_info;
        inline app::LessThanInstruction_LessThanChar__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanChar__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanChar");
        }
        inline app::LessThanInstruction_LessThanChar* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanChar>(get_class());
        }
    } // namespace LessThanInstruction_LessThanChar
} // namespace app::classes::types
