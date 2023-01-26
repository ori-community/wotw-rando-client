#pragma once
#include <Modloader/app/structs/EqualInstruction_EqualUInt16LiftedToNull.h>
#include <Modloader/app/structs/EqualInstruction_EqualUInt16LiftedToNull__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualUInt16LiftedToNull {
        inline app::EqualInstruction_EqualUInt16LiftedToNull__Class** type_info() {
            static app::EqualInstruction_EqualUInt16LiftedToNull__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EqualInstruction_EqualUInt16LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x0470EC08));
            }
            return cache;
        }
        inline app::EqualInstruction_EqualUInt16LiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualUInt16LiftedToNull__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualUInt16LiftedToNull");
        }
        inline app::EqualInstruction_EqualUInt16LiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualUInt16LiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualUInt16LiftedToNull
} // namespace app::classes::types
