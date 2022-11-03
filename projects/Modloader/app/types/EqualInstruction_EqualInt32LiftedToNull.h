#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualInt32LiftedToNull {
        inline app::EqualInstruction_EqualInt32LiftedToNull__Class** type_info = (app::EqualInstruction_EqualInt32LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x0476EE18));
        inline app::EqualInstruction_EqualInt32LiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualInt32LiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualInt32LiftedToNull");
        }
        inline app::EqualInstruction_EqualInt32LiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualInt32LiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualInt32LiftedToNull
} // namespace app::classes::types
