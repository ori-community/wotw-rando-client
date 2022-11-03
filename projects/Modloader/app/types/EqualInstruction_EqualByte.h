#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualByte {
        inline app::EqualInstruction_EqualByte__Class** type_info = (app::EqualInstruction_EqualByte__Class**)(modloader::win::memory::resolve_rva(0x0477B960));
        inline app::EqualInstruction_EqualByte__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualByte");
        }
        inline app::EqualInstruction_EqualByte* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualByte>(get_class());
        }
    } // namespace EqualInstruction_EqualByte
} // namespace app::classes::types
