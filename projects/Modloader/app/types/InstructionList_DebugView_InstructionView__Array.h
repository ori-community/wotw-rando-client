#pragma once
#include <Modloader/app/structs/InstructionList_DebugView_InstructionView__Array.h>
#include <Modloader/app/structs/InstructionList_DebugView_InstructionView__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstructionList_DebugView_InstructionView__Array {
        inline app::InstructionList_DebugView_InstructionView__Array__Class** type_info() {
            static app::InstructionList_DebugView_InstructionView__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InstructionList_DebugView_InstructionView__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InstructionList_DebugView_InstructionView__Array__Class* get_class() {
            return il2cpp::get_class<app::InstructionList_DebugView_InstructionView__Array__Class>(type_info(), "System.Linq.Expressions.Interpreter", "InstructionList+DebugView+InstructionView[]");
        }
        inline app::InstructionList_DebugView_InstructionView__Array* create() {
            return il2cpp::create_object<app::InstructionList_DebugView_InstructionView__Array>(get_class());
        }
    } // namespace InstructionList_DebugView_InstructionView__Array
} // namespace app::classes::types
