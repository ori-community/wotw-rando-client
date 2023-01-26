#pragma once
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualInt64.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualInt64 {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt64__Class** type_info() {
            static app::LessThanOrEqualInstruction_LessThanOrEqualInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanOrEqualInstruction_LessThanOrEqualInt64__Class**)(modloader::win::memory::resolve_rva(0x0477D270));
            }
            return cache;
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualInt64");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt64* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualInt64>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualInt64
} // namespace app::classes::types
