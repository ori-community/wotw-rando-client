#pragma once
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64 {
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64__Class** type_info() {
            static app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64__Class**)(modloader::win::memory::resolve_rva(0x047433C0));
            }
            return cache;
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualInt64");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64
} // namespace app::classes::types
