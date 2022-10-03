#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanInt16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GreaterThanInstruction_GreaterThanInt16__Class** type_info;
        inline app::GreaterThanInstruction_GreaterThanInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanInt16");
        }
        inline app::GreaterThanInstruction_GreaterThanInt16* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanInt16>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanInt16
} // namespace app::classes::types
