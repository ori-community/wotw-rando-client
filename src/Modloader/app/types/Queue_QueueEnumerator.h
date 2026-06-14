#pragma once
#include <Modloader/app/structs/Queue_QueueEnumerator.h>
#include <Modloader/app/structs/Queue_QueueEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Queue_QueueEnumerator {
        inline app::Queue_QueueEnumerator__Class** type_info() {
            static app::Queue_QueueEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Queue_QueueEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04741240));
            }
            return cache;
        }
        inline app::Queue_QueueEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Queue_QueueEnumerator__Class>(type_info(), "System.Collections", "Queue", "QueueEnumerator");
        }
        inline app::Queue_QueueEnumerator* create() {
            return il2cpp::create_object<app::Queue_QueueEnumerator>(get_class());
        }
    } // namespace Queue_QueueEnumerator
} // namespace app::classes::types
