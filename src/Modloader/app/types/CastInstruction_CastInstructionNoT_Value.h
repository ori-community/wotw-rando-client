#pragma once
#include <Modloader/app/structs/CastInstruction_CastInstructionNoT_Value.h>
#include <Modloader/app/structs/CastInstruction_CastInstructionNoT_Value__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CastInstruction_CastInstructionNoT_Value {
        inline app::CastInstruction_CastInstructionNoT_Value__Class** type_info() {
            static app::CastInstruction_CastInstructionNoT_Value__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CastInstruction_CastInstructionNoT_Value__Class**)(modloader::win::memory::resolve_rva(0x04744C70));
            }
            return cache;
        }
        inline app::CastInstruction_CastInstructionNoT_Value__Class* get_class() {
            return il2cpp::get_nested_class<app::CastInstruction_CastInstructionNoT_Value__Class>(type_info(), "System.Linq.Expressions.Interpreter", "CastInstruction+CastInstructionNoT", "Value");
        }
        inline app::CastInstruction_CastInstructionNoT_Value* create() {
            return il2cpp::create_object<app::CastInstruction_CastInstructionNoT_Value>(get_class());
        }
    } // namespace CastInstruction_CastInstructionNoT_Value
} // namespace app::classes::types
