#pragma once
#include <Modloader/app/structs/InstructionArray_DebugView.h>
#include <Modloader/app/structs/InstructionArray_DebugView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstructionArray_DebugView {
        inline app::InstructionArray_DebugView__Class** type_info() {
            static app::InstructionArray_DebugView__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InstructionArray_DebugView__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InstructionArray_DebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::InstructionArray_DebugView__Class>(type_info(), "System.Linq.Expressions.Interpreter", "InstructionArray", "DebugView");
        }
        inline app::InstructionArray_DebugView* create() {
            return il2cpp::create_object<app::InstructionArray_DebugView>(get_class());
        }
    } // namespace InstructionArray_DebugView
} // namespace app::classes::types
