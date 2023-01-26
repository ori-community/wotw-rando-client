#pragma once
#include <Modloader/app/structs/Queue_QueueDebugView.h>
#include <Modloader/app/structs/Queue_QueueDebugView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Queue_QueueDebugView {
        inline app::Queue_QueueDebugView__Class** type_info() {
            static app::Queue_QueueDebugView__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Queue_QueueDebugView__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Queue_QueueDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::Queue_QueueDebugView__Class>(type_info(), "System.Collections", "Queue", "QueueDebugView");
        }
        inline app::Queue_QueueDebugView* create() {
            return il2cpp::create_object<app::Queue_QueueDebugView>(get_class());
        }
    } // namespace Queue_QueueDebugView
} // namespace app::classes::types
