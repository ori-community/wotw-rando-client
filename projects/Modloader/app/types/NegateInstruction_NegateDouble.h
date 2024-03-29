#pragma once
#include <Modloader/app/structs/NegateInstruction_NegateDouble.h>
#include <Modloader/app/structs/NegateInstruction_NegateDouble__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NegateInstruction_NegateDouble {
        inline app::NegateInstruction_NegateDouble__Class** type_info() {
            static app::NegateInstruction_NegateDouble__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NegateInstruction_NegateDouble__Class**)(modloader::win::memory::resolve_rva(0x0476C0C8));
            }
            return cache;
        }
        inline app::NegateInstruction_NegateDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateInstruction_NegateDouble__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NegateInstruction", "NegateDouble");
        }
        inline app::NegateInstruction_NegateDouble* create() {
            return il2cpp::create_object<app::NegateInstruction_NegateDouble>(get_class());
        }
    } // namespace NegateInstruction_NegateDouble
} // namespace app::classes::types
