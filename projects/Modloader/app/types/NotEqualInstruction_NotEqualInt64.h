#pragma once
#include <Modloader/app/structs/NotEqualInstruction_NotEqualInt64.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualInt64 {
        inline app::NotEqualInstruction_NotEqualInt64__Class** type_info() {
            static app::NotEqualInstruction_NotEqualInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotEqualInstruction_NotEqualInt64__Class**)(modloader::win::memory::resolve_rva(0x0473DA40));
            }
            return cache;
        }
        inline app::NotEqualInstruction_NotEqualInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualInt64");
        }
        inline app::NotEqualInstruction_NotEqualInt64* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualInt64>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualInt64
} // namespace app::classes::types
