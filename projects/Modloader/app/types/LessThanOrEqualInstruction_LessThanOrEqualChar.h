#pragma once
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualChar.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualChar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualChar {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualChar__Class** type_info() {
            static app::LessThanOrEqualInstruction_LessThanOrEqualChar__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanOrEqualInstruction_LessThanOrEqualChar__Class**)(modloader::win::memory::resolve_rva(0x04797E80));
            }
            return cache;
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualChar__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualChar__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualChar");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualChar* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualChar>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualChar
} // namespace app::classes::types
