#pragma once
#include <Modloader/app/structs/Stack_StackDebugView.h>
#include <Modloader/app/structs/Stack_StackDebugView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Stack_StackDebugView {
        inline app::Stack_StackDebugView__Class** type_info() {
            static app::Stack_StackDebugView__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Stack_StackDebugView__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Stack_StackDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::Stack_StackDebugView__Class>(type_info(), "System.Collections", "Stack", "StackDebugView");
        }
        inline app::Stack_StackDebugView* create() {
            return il2cpp::create_object<app::Stack_StackDebugView>(get_class());
        }
    } // namespace Stack_StackDebugView
} // namespace app::classes::types
