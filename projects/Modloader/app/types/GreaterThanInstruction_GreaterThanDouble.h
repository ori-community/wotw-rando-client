#pragma once
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanDouble.h>
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanDouble__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanDouble {
        inline app::GreaterThanInstruction_GreaterThanDouble__Class** type_info() {
            static app::GreaterThanInstruction_GreaterThanDouble__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GreaterThanInstruction_GreaterThanDouble__Class**)(modloader::win::memory::resolve_rva(0x0476C0D8));
            }
            return cache;
        }
        inline app::GreaterThanInstruction_GreaterThanDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanDouble__Class>(type_info(), "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanDouble");
        }
        inline app::GreaterThanInstruction_GreaterThanDouble* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanDouble>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanDouble
} // namespace app::classes::types
