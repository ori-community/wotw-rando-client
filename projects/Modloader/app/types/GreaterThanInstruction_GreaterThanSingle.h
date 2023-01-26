#pragma once
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanSingle.h>
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanSingle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanSingle {
        inline app::GreaterThanInstruction_GreaterThanSingle__Class** type_info() {
            static app::GreaterThanInstruction_GreaterThanSingle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GreaterThanInstruction_GreaterThanSingle__Class**)(modloader::win::memory::resolve_rva(0x04734600));
            }
            return cache;
        }
        inline app::GreaterThanInstruction_GreaterThanSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanSingle__Class>(type_info(), "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanSingle");
        }
        inline app::GreaterThanInstruction_GreaterThanSingle* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanSingle>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanSingle
} // namespace app::classes::types
