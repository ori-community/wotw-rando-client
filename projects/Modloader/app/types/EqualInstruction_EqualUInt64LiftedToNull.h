#pragma once
#include <Modloader/app/structs/EqualInstruction_EqualUInt64LiftedToNull.h>
#include <Modloader/app/structs/EqualInstruction_EqualUInt64LiftedToNull__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualUInt64LiftedToNull {
        inline app::EqualInstruction_EqualUInt64LiftedToNull__Class** type_info() {
            static app::EqualInstruction_EqualUInt64LiftedToNull__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EqualInstruction_EqualUInt64LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04705710));
            }
            return cache;
        }
        inline app::EqualInstruction_EqualUInt64LiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualUInt64LiftedToNull__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualUInt64LiftedToNull");
        }
        inline app::EqualInstruction_EqualUInt64LiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualUInt64LiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualUInt64LiftedToNull
} // namespace app::classes::types
