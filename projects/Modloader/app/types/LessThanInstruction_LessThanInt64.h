#pragma once
#include <Modloader/app/structs/LessThanInstruction_LessThanInt64.h>
#include <Modloader/app/structs/LessThanInstruction_LessThanInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanInt64 {
        inline app::LessThanInstruction_LessThanInt64__Class** type_info() {
            static app::LessThanInstruction_LessThanInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanInstruction_LessThanInt64__Class**)(modloader::win::memory::resolve_rva(0x0477CEE0));
            }
            return cache;
        }
        inline app::LessThanInstruction_LessThanInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanInt64");
        }
        inline app::LessThanInstruction_LessThanInt64* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanInt64>(get_class());
        }
    } // namespace LessThanInstruction_LessThanInt64
} // namespace app::classes::types
