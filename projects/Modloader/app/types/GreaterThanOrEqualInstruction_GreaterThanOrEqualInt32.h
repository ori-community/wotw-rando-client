#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32__Class.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32 {
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32__Class** type_info = (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32__Class**)(modloader::win::memory::resolve_rva(0x0471CD68));
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualInt32");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualInt32
} // namespace app::classes::types
