#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualDouble__Class.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualDouble.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualDouble {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualDouble__Class** type_info = (app::LessThanOrEqualInstruction_LessThanOrEqualDouble__Class**)(modloader::win::memory::resolve_rva(0x0476B8A8));
        inline app::LessThanOrEqualInstruction_LessThanOrEqualDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualDouble");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualDouble* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualDouble>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualDouble
} // namespace app::classes::types
