#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstructionList_DebugView_InstructionView {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstructionList_DebugView_InstructionView__Class** type_info;
        inline app::InstructionList_DebugView_InstructionView__Class* get_class() {
            return il2cpp::get_nested_class<app::InstructionList_DebugView_InstructionView__Class>(type_info, "System.Linq.Expressions.Interpreter", "InstructionList+DebugView", "InstructionView");
        }
        inline app::InstructionList_DebugView_InstructionView* create() {
            return il2cpp::create_object<app::InstructionList_DebugView_InstructionView>(get_class());
        }
        inline app::InstructionList_DebugView_InstructionView__Boxed* box(app::InstructionList_DebugView_InstructionView value) {
            return il2cpp::box_value<app::InstructionList_DebugView_InstructionView__Boxed>(get_class(), value);
        }
        inline app::InstructionList_DebugView_InstructionView__Array* create_array(int size) {
            return il2cpp::array_new<app::InstructionList_DebugView_InstructionView__Array>(get_class(), size);
        }
    } // namespace InstructionList_DebugView_InstructionView
} // namespace app::classes::types
