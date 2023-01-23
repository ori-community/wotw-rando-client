#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EqualInstruction_EqualDoubleLiftedToNull__Class.h>
#include <Modloader/app/structs/EqualInstruction_EqualDoubleLiftedToNull.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualDoubleLiftedToNull {
        inline app::EqualInstruction_EqualDoubleLiftedToNull__Class** type_info = (app::EqualInstruction_EqualDoubleLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x047430F8));
        inline app::EqualInstruction_EqualDoubleLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualDoubleLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualDoubleLiftedToNull");
        }
        inline app::EqualInstruction_EqualDoubleLiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualDoubleLiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualDoubleLiftedToNull
} // namespace app::classes::types
