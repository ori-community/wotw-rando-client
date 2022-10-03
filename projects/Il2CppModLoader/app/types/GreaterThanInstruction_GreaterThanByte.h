#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GreaterThanInstruction_GreaterThanByte__Class** type_info;
        inline app::GreaterThanInstruction_GreaterThanByte__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanByte");
        }
        inline app::GreaterThanInstruction_GreaterThanByte* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanByte>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanByte
} // namespace app::classes::types
