#pragma once
#include <Modloader/app/structs/EqualInstruction_EqualDouble.h>
#include <Modloader/app/structs/EqualInstruction_EqualDouble__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualDouble {
        inline app::EqualInstruction_EqualDouble__Class** type_info() {
            static app::EqualInstruction_EqualDouble__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EqualInstruction_EqualDouble__Class**)(modloader::win::memory::resolve_rva(0x04770BC0));
            }
            return cache;
        }
        inline app::EqualInstruction_EqualDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualDouble__Class>(type_info(), "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualDouble");
        }
        inline app::EqualInstruction_EqualDouble* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualDouble>(get_class());
        }
    } // namespace EqualInstruction_EqualDouble
} // namespace app::classes::types
