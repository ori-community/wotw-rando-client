#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DivInstruction_DivDouble {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DivInstruction_DivDouble__Class** type_info;
        inline app::DivInstruction_DivDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::DivInstruction_DivDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "DivInstruction", "DivDouble");
        }
        inline app::DivInstruction_DivDouble* create() {
            return il2cpp::create_object<app::DivInstruction_DivDouble>(get_class());
        }
    } // namespace DivInstruction_DivDouble
} // namespace app::classes::types
