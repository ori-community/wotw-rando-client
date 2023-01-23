#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EqualInstruction_EqualInt64LiftedToNull__Class.h>
#include <Modloader/app/structs/EqualInstruction_EqualInt64LiftedToNull.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualInt64LiftedToNull {
        inline app::EqualInstruction_EqualInt64LiftedToNull__Class** type_info = (app::EqualInstruction_EqualInt64LiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04741800));
        inline app::EqualInstruction_EqualInt64LiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualInt64LiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualInt64LiftedToNull");
        }
        inline app::EqualInstruction_EqualInt64LiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualInt64LiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualInt64LiftedToNull
} // namespace app::classes::types
