#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LessThanInstruction_LessThanByte__Class** type_info;
        inline app::LessThanInstruction_LessThanByte__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanByte");
        }
        inline app::LessThanInstruction_LessThanByte* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanByte>(get_class());
        }
    } // namespace LessThanInstruction_LessThanByte
} // namespace app::classes::types
