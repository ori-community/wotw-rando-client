#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DivInstruction_DivUInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DivInstruction_DivUInt32__Class** type_info;
        inline app::DivInstruction_DivUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::DivInstruction_DivUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "DivInstruction", "DivUInt32");
        }
        inline app::DivInstruction_DivUInt32* create() {
            return il2cpp::create_object<app::DivInstruction_DivUInt32>(get_class());
        }
    } // namespace DivInstruction_DivUInt32
} // namespace app::classes::types
