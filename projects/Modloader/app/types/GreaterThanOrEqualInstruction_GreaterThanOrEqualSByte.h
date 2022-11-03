#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte {
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class** type_info = (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class**)(modloader::win::memory::resolve_rva(0x047705A0));
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualSByte");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte
} // namespace app::classes::types
