#pragma once
#include <Modloader/app/structs/CastInstruction_CastInstructionNoT.h>
#include <Modloader/app/structs/CastInstruction_CastInstructionNoT__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CastInstruction_CastInstructionNoT {
        inline app::CastInstruction_CastInstructionNoT__Class** type_info() {
            static app::CastInstruction_CastInstructionNoT__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CastInstruction_CastInstructionNoT__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CastInstruction_CastInstructionNoT__Class* get_class() {
            return il2cpp::get_nested_class<app::CastInstruction_CastInstructionNoT__Class>(type_info(), "System.Linq.Expressions.Interpreter", "CastInstruction", "CastInstructionNoT");
        }
        inline app::CastInstruction_CastInstructionNoT* create() {
            return il2cpp::create_object<app::CastInstruction_CastInstructionNoT>(get_class());
        }
    } // namespace CastInstruction_CastInstructionNoT
} // namespace app::classes::types
