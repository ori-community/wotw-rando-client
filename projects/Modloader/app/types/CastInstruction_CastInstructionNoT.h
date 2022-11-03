#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CastInstruction_CastInstructionNoT {
        namespace {
            inline app::CastInstruction_CastInstructionNoT__Class* type_info_ref = nullptr;
        }
        inline app::CastInstruction_CastInstructionNoT__Class** type_info = &type_info_ref;
        inline app::CastInstruction_CastInstructionNoT__Class* get_class() {
            return il2cpp::get_nested_class<app::CastInstruction_CastInstructionNoT__Class>(type_info, "System.Linq.Expressions.Interpreter", "CastInstruction", "CastInstructionNoT");
        }
        inline app::CastInstruction_CastInstructionNoT* create() {
            return il2cpp::create_object<app::CastInstruction_CastInstructionNoT>(get_class());
        }
    } // namespace CastInstruction_CastInstructionNoT
} // namespace app::classes::types
