#pragma once
#include <Modloader/app/structs/LessThanInstruction_LessThanUInt64.h>
#include <Modloader/app/structs/LessThanInstruction_LessThanUInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanUInt64 {
        inline app::LessThanInstruction_LessThanUInt64__Class** type_info() {
            static app::LessThanInstruction_LessThanUInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanInstruction_LessThanUInt64__Class**)(modloader::win::memory::resolve_rva(0x0477E950));
            }
            return cache;
        }
        inline app::LessThanInstruction_LessThanUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanUInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanUInt64");
        }
        inline app::LessThanInstruction_LessThanUInt64* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanUInt64>(get_class());
        }
    } // namespace LessThanInstruction_LessThanUInt64
} // namespace app::classes::types
