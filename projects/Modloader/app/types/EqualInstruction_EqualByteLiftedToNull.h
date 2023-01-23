#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EqualInstruction_EqualByteLiftedToNull__Class.h>
#include <Modloader/app/structs/EqualInstruction_EqualByteLiftedToNull.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualByteLiftedToNull {
        inline app::EqualInstruction_EqualByteLiftedToNull__Class** type_info = (app::EqualInstruction_EqualByteLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04790CD8));
        inline app::EqualInstruction_EqualByteLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualByteLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualByteLiftedToNull");
        }
        inline app::EqualInstruction_EqualByteLiftedToNull* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualByteLiftedToNull>(get_class());
        }
    } // namespace EqualInstruction_EqualByteLiftedToNull
} // namespace app::classes::types
