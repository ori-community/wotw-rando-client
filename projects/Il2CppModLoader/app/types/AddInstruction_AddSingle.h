#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddInstruction_AddSingle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddInstruction_AddSingle__Class** type_info;
        inline app::AddInstruction_AddSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction", "AddSingle");
        }
        inline app::AddInstruction_AddSingle* create() {
            return il2cpp::create_object<app::AddInstruction_AddSingle>(get_class());
        }
    } // namespace AddInstruction_AddSingle
} // namespace app::classes::types
