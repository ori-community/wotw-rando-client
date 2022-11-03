#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualByte {
        inline app::NotEqualInstruction_NotEqualByte__Class** type_info = (app::NotEqualInstruction_NotEqualByte__Class**)(modloader::win::memory::resolve_rva(0x04725620));
        inline app::NotEqualInstruction_NotEqualByte__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualByte");
        }
        inline app::NotEqualInstruction_NotEqualByte* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualByte>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualByte
} // namespace app::classes::types
