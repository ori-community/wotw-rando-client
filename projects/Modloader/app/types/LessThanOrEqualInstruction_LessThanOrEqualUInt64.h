#pragma once
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualUInt64.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualUInt64__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualUInt64 {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualUInt64__Class** type_info() {
            static app::LessThanOrEqualInstruction_LessThanOrEqualUInt64__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanOrEqualInstruction_LessThanOrEqualUInt64__Class**)(modloader::win::memory::resolve_rva(0x0470A758));
            }
            return cache;
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualUInt64__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualUInt64");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualUInt64* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualUInt64>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualUInt64
} // namespace app::classes::types
