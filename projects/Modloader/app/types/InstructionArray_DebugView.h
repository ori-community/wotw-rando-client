#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InstructionArray_DebugView__Class.h>
#include <Modloader/app/structs/InstructionArray_DebugView.h>

namespace app::classes::types {
    namespace InstructionArray_DebugView {
        namespace {
            inline app::InstructionArray_DebugView__Class* type_info_ref = nullptr;
        }
        inline app::InstructionArray_DebugView__Class** type_info = &type_info_ref;
        inline app::InstructionArray_DebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::InstructionArray_DebugView__Class>(type_info, "System.Linq.Expressions.Interpreter", "InstructionArray", "DebugView");
        }
        inline app::InstructionArray_DebugView* create() {
            return il2cpp::create_object<app::InstructionArray_DebugView>(get_class());
        }
    } // namespace InstructionArray_DebugView
} // namespace app::classes::types
