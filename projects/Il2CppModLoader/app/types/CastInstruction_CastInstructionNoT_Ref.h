#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CastInstruction_CastInstructionNoT_Ref {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CastInstruction_CastInstructionNoT_Ref__Class** type_info;
        inline app::CastInstruction_CastInstructionNoT_Ref__Class* get_class() {
            return il2cpp::get_nested_class<app::CastInstruction_CastInstructionNoT_Ref__Class>(type_info, "System.Linq.Expressions.Interpreter", "CastInstruction+CastInstructionNoT", "Ref");
        }
        inline app::CastInstruction_CastInstructionNoT_Ref* create() {
            return il2cpp::create_object<app::CastInstruction_CastInstructionNoT_Ref>(get_class());
        }
    } // namespace CastInstruction_CastInstructionNoT_Ref
} // namespace app::classes::types
