#pragma once
#include <Modloader/app/structs/InstructionList_DebugView_InstructionView.h>
#include <Modloader/app/structs/InstructionList_DebugView_InstructionView__Array.h>
#include <Modloader/app/structs/InstructionList_DebugView_InstructionView__Boxed.h>
#include <Modloader/app/structs/InstructionList_DebugView_InstructionView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstructionList_DebugView_InstructionView {
        inline app::InstructionList_DebugView_InstructionView__Class** type_info() {
            static app::InstructionList_DebugView_InstructionView__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstructionList_DebugView_InstructionView__Class**)(modloader::win::memory::resolve_rva(0x04725370));
            }
            return cache;
        }
        inline app::InstructionList_DebugView_InstructionView__Class* get_class() {
            return il2cpp::get_nested_class<app::InstructionList_DebugView_InstructionView__Class>(type_info(), "System.Linq.Expressions.Interpreter", "InstructionList+DebugView", "InstructionView");
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
        inline app::InstructionList_DebugView_InstructionView__Array* create_array(const std::vector<app::InstructionList_DebugView_InstructionView>& items) {
            return il2cpp::array_new<app::InstructionList_DebugView_InstructionView__Array>(get_class(), items);
        }
    } // namespace InstructionList_DebugView_InstructionView
} // namespace app::classes::types
