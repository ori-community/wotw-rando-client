#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstructionList_DebugView {
        namespace {
            app::InstructionList_DebugView__Class* type_info_ref = nullptr;
        }
        app::InstructionList_DebugView__Class** type_info = &type_info_ref;
        inline app::InstructionList_DebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::InstructionList_DebugView__Class>(type_info, "System.Linq.Expressions.Interpreter", "InstructionList", "DebugView");
        }
        inline app::InstructionList_DebugView* create() {
            return il2cpp::create_object<app::InstructionList_DebugView>(get_class());
        }
    } // namespace InstructionList_DebugView
} // namespace app::classes::types
