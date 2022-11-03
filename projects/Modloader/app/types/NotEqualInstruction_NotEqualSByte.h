#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualSByte {
        inline app::NotEqualInstruction_NotEqualSByte__Class** type_info = (app::NotEqualInstruction_NotEqualSByte__Class**)(modloader::win::memory::resolve_rva(0x04778A60));
        inline app::NotEqualInstruction_NotEqualSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualSByte");
        }
        inline app::NotEqualInstruction_NotEqualSByte* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualSByte>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualSByte
} // namespace app::classes::types
