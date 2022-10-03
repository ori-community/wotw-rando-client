#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddInstruction_AddUInt16 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddInstruction_AddUInt16__Class** type_info;
        inline app::AddInstruction_AddUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction", "AddUInt16");
        }
        inline app::AddInstruction_AddUInt16* create() {
            return il2cpp::create_object<app::AddInstruction_AddUInt16>(get_class());
        }
    } // namespace AddInstruction_AddUInt16
} // namespace app::classes::types
