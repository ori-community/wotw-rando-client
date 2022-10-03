#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstructionArray_DebugView {
        namespace {
            app::InstructionArray_DebugView__Class* type_info_ref = nullptr;
        }
        app::InstructionArray_DebugView__Class** type_info = &type_info_ref;
        inline app::InstructionArray_DebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::InstructionArray_DebugView__Class>(type_info, "System.Linq.Expressions.Interpreter", "InstructionArray", "DebugView");
        }
        inline app::InstructionArray_DebugView* create() {
            return il2cpp::create_object<app::InstructionArray_DebugView>(get_class());
        }
    } // namespace InstructionArray_DebugView
} // namespace app::classes::types
