#pragma once
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualSingle.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualSingle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualSingle {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualSingle__Class** type_info() {
            static app::LessThanOrEqualInstruction_LessThanOrEqualSingle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LessThanOrEqualInstruction_LessThanOrEqualSingle__Class**)(modloader::win::memory::resolve_rva(0x0477BD68));
            }
            return cache;
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualSingle__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualSingle");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualSingle* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualSingle>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualSingle
} // namespace app::classes::types
