#pragma once
#include <Modloader/app/structs/NegateCheckedInstruction_NegateCheckedInt64.h>
#include <Modloader/app/structs/NegateCheckedInstruction_NegateCheckedInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NegateCheckedInstruction_NegateCheckedInt64 {
        inline app::NegateCheckedInstruction_NegateCheckedInt64__Class** type_info() {
            static app::NegateCheckedInstruction_NegateCheckedInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NegateCheckedInstruction_NegateCheckedInt64__Class**)(modloader::win::memory::resolve_rva(0x04715B20));
            }
            return cache;
        }
        inline app::NegateCheckedInstruction_NegateCheckedInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateCheckedInstruction_NegateCheckedInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "NegateCheckedInstruction", "NegateCheckedInt64");
        }
        inline app::NegateCheckedInstruction_NegateCheckedInt64* create() {
            return il2cpp::create_object<app::NegateCheckedInstruction_NegateCheckedInt64>(get_class());
        }
    } // namespace NegateCheckedInstruction_NegateCheckedInt64
} // namespace app::classes::types
