#pragma once
#include <Modloader/app/structs/NotEqualInstruction_NotEqualInt64LiftedToNull.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualInt64LiftedToNull__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualInt64LiftedToNull {
        inline app::NotEqualInstruction_NotEqualInt64LiftedToNull__Class** type_info() {
            static app::NotEqualInstruction_NotEqualInt64LiftedToNull__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotEqualInstruction_NotEqualInt64LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x0471ACB0));
            }
            return cache;
        }
        inline app::NotEqualInstruction_NotEqualInt64LiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualInt64LiftedToNull__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualInt64LiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualInt64LiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualInt64LiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualInt64LiftedToNull
} // namespace app::classes::types
