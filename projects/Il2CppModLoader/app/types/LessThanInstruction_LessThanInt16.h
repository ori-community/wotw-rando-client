#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanInt16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LessThanInstruction_LessThanInt16__Class** type_info;
        inline app::LessThanInstruction_LessThanInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanInt16");
        }
        inline app::LessThanInstruction_LessThanInt16* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanInt16>(get_class());
        }
    } // namespace LessThanInstruction_LessThanInt16
} // namespace app::classes::types
