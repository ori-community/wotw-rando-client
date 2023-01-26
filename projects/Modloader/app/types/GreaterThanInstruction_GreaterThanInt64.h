#pragma once
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanInt64.h>
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanInt64 {
        inline app::GreaterThanInstruction_GreaterThanInt64__Class** type_info() {
            static app::GreaterThanInstruction_GreaterThanInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GreaterThanInstruction_GreaterThanInt64__Class**)(modloader::win::memory::resolve_rva(0x04747D80));
            }
            return cache;
        }
        inline app::GreaterThanInstruction_GreaterThanInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanInt64");
        }
        inline app::GreaterThanInstruction_GreaterThanInt64* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanInt64>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanInt64
} // namespace app::classes::types
