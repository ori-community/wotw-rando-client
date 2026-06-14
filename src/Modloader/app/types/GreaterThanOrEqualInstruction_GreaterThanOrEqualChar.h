#pragma once
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualChar.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualChar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualChar {
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar__Class** type_info() {
            static app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar__Class**)(modloader::win::memory::resolve_rva(0x047697D8));
            }
            return cache;
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar__Class>(type_info(), "System.Linq.Expressions.Interpreter", "GreaterThanOrEqualInstruction", "GreaterThanOrEqualChar");
        }
        inline app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar* create() {
            return il2cpp::create_object<app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar>(get_class());
        }
    } // namespace GreaterThanOrEqualInstruction_GreaterThanOrEqualChar
} // namespace app::classes::types
