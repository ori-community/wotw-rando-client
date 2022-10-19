#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CastInstruction_CastInstructionNoT_Value {
        inline app::CastInstruction_CastInstructionNoT_Value__Class** type_info = (app::CastInstruction_CastInstructionNoT_Value__Class**)(modloader::win::memory::resolve_rva(0x04744C70));
        inline app::CastInstruction_CastInstructionNoT_Value__Class* get_class() {
            return il2cpp::get_nested_class<app::CastInstruction_CastInstructionNoT_Value__Class>(type_info, "System.Linq.Expressions.Interpreter", "CastInstruction+CastInstructionNoT", "Value");
        }
        inline app::CastInstruction_CastInstructionNoT_Value* create() {
            return il2cpp::create_object<app::CastInstruction_CastInstructionNoT_Value>(get_class());
        }
    } // namespace CastInstruction_CastInstructionNoT_Value
} // namespace app::classes::types
