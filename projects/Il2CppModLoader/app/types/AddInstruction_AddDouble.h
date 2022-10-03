#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddInstruction_AddDouble {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddInstruction_AddDouble__Class** type_info;
        inline app::AddInstruction_AddDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction", "AddDouble");
        }
        inline app::AddInstruction_AddDouble* create() {
            return il2cpp::create_object<app::AddInstruction_AddDouble>(get_class());
        }
    } // namespace AddInstruction_AddDouble
} // namespace app::classes::types
