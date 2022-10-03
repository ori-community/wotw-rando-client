#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MulInstruction_MulSingle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MulInstruction_MulSingle__Class** type_info;
        inline app::MulInstruction_MulSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::MulInstruction_MulSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulInstruction", "MulSingle");
        }
        inline app::MulInstruction_MulSingle* create() {
            return il2cpp::create_object<app::MulInstruction_MulSingle>(get_class());
        }
    } // namespace MulInstruction_MulSingle
} // namespace app::classes::types
