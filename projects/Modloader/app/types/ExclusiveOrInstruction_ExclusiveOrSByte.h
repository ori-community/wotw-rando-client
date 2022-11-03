#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrSByte {
        inline app::ExclusiveOrInstruction_ExclusiveOrSByte__Class** type_info = (app::ExclusiveOrInstruction_ExclusiveOrSByte__Class**)(modloader::win::memory::resolve_rva(0x047063C0));
        inline app::ExclusiveOrInstruction_ExclusiveOrSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrSByte");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrSByte* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrSByte>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrSByte
} // namespace app::classes::types
