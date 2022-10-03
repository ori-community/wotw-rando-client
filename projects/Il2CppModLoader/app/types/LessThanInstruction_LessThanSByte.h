#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanSByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LessThanInstruction_LessThanSByte__Class** type_info;
        inline app::LessThanInstruction_LessThanSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanSByte");
        }
        inline app::LessThanInstruction_LessThanSByte* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanSByte>(get_class());
        }
    } // namespace LessThanInstruction_LessThanSByte
} // namespace app::classes::types
