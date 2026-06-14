#pragma once
#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftInt64.h>
#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeftShiftInstruction_LeftShiftInt64 {
        inline app::LeftShiftInstruction_LeftShiftInt64__Class** type_info() {
            static app::LeftShiftInstruction_LeftShiftInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeftShiftInstruction_LeftShiftInt64__Class**)(modloader::win::memory::resolve_rva(0x04730558));
            }
            return cache;
        }
        inline app::LeftShiftInstruction_LeftShiftInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftShiftInstruction_LeftShiftInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LeftShiftInstruction", "LeftShiftInt64");
        }
        inline app::LeftShiftInstruction_LeftShiftInt64* create() {
            return il2cpp::create_object<app::LeftShiftInstruction_LeftShiftInt64>(get_class());
        }
    } // namespace LeftShiftInstruction_LeftShiftInt64
} // namespace app::classes::types
