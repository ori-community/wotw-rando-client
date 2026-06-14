#pragma once
#include <Modloader/app/structs/CastInstruction_CastInstructionNoT_Ref.h>
#include <Modloader/app/structs/CastInstruction_CastInstructionNoT_Ref__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CastInstruction_CastInstructionNoT_Ref {
        inline app::CastInstruction_CastInstructionNoT_Ref__Class** type_info() {
            static app::CastInstruction_CastInstructionNoT_Ref__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CastInstruction_CastInstructionNoT_Ref__Class**)(modloader::win::memory::resolve_rva(0x04713210));
            }
            return cache;
        }
        inline app::CastInstruction_CastInstructionNoT_Ref__Class* get_class() {
            return il2cpp::get_nested_class<app::CastInstruction_CastInstructionNoT_Ref__Class>(type_info(), "System.Linq.Expressions.Interpreter", "CastInstruction+CastInstructionNoT", "Ref");
        }
        inline app::CastInstruction_CastInstructionNoT_Ref* create() {
            return il2cpp::create_object<app::CastInstruction_CastInstructionNoT_Ref>(get_class());
        }
    } // namespace CastInstruction_CastInstructionNoT_Ref
} // namespace app::classes::types
