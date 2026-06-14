#pragma once
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble {
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble__Class** type_info() {
            static app::GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble__Class**)(modloader::win::memory::resolve_rva(0x047562E8));
            }
            return cache;
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble__Class>(type_info(), "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualDouble");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble
} // namespace app::classes::types
