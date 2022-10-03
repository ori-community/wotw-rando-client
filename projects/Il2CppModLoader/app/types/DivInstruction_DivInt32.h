#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DivInstruction_DivInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DivInstruction_DivInt32__Class** type_info;
        inline app::DivInstruction_DivInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::DivInstruction_DivInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "DivInstruction", "DivInt32");
        }
        inline app::DivInstruction_DivInt32* create() {
            return il2cpp::create_object<app::DivInstruction_DivInt32>(get_class());
        }
    } // namespace DivInstruction_DivInt32
} // namespace app::classes::types
