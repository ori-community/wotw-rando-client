#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualInt32LiftedToNull {
        inline app::NotEqualInstruction_NotEqualInt32LiftedToNull__Class** type_info = (app::NotEqualInstruction_NotEqualInt32LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04786080));
        inline app::NotEqualInstruction_NotEqualInt32LiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualInt32LiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualInt32LiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualInt32LiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualInt32LiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualInt32LiftedToNull
} // namespace app::classes::types
