#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16__Class.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16 {
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16__Class** type_info = (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16__Class**)(modloader::win::memory::resolve_rva(0x04780320));
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualUInt16");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16
} // namespace app::classes::types
