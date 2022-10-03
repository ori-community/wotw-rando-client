#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MulInstruction_MulDouble {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MulInstruction_MulDouble__Class** type_info;
        inline app::MulInstruction_MulDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::MulInstruction_MulDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulInstruction", "MulDouble");
        }
        inline app::MulInstruction_MulDouble* create() {
            return il2cpp::create_object<app::MulInstruction_MulDouble>(get_class());
        }
    } // namespace MulInstruction_MulDouble
} // namespace app::classes::types
