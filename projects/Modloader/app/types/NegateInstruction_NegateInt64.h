#pragma once
#include <Modloader/app/structs/NegateInstruction_NegateInt64.h>
#include <Modloader/app/structs/NegateInstruction_NegateInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NegateInstruction_NegateInt64 {
        inline app::NegateInstruction_NegateInt64__Class** type_info() {
            static app::NegateInstruction_NegateInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NegateInstruction_NegateInt64__Class**)(modloader::win::memory::resolve_rva(0x0477CA88));
            }
            return cache;
        }
        inline app::NegateInstruction_NegateInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateInstruction_NegateInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NegateInstruction", "NegateInt64");
        }
        inline app::NegateInstruction_NegateInt64* create() {
            return il2cpp::create_object<app::NegateInstruction_NegateInt64>(get_class());
        }
    } // namespace NegateInstruction_NegateInt64
} // namespace app::classes::types
