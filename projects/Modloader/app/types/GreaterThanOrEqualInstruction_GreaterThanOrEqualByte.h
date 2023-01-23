#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualByte__Class.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualByte.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualByte {
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualByte__Class** type_info = (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualByte__Class**)(modloader::win::memory::resolve_rva(0x04706CC0));
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualByte__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualByte");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualByte* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualByte>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualByte
} // namespace app::classes::types
