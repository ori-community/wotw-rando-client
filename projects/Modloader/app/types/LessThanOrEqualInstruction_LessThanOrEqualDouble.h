#pragma once
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualDouble.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualDouble__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualDouble {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualDouble__Class** type_info() {
            static app::LessThanOrEqualInstruction_LessThanOrEqualDouble__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanOrEqualInstruction_LessThanOrEqualDouble__Class**)(modloader::win::memory::resolve_rva(0x0476B8A8));
            }
            return cache;
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualDouble__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualDouble");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualDouble* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualDouble>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualDouble
} // namespace app::classes::types
