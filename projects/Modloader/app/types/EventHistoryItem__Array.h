#pragma once
#include <Modloader/app/structs/EventHistoryItem__Array.h>
#include <Modloader/app/structs/EventHistoryItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventHistoryItem__Array {
        inline app::EventHistoryItem__Array__Class** type_info() {
            static app::EventHistoryItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventHistoryItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventHistoryItem__Array__Class* get_class() {
            return il2cpp::get_class<app::EventHistoryItem__Array__Class>(type_info(), "Moon.Timeline", "EventHistoryItem[]");
        }
        inline app::EventHistoryItem__Array* create() {
            return il2cpp::create_object<app::EventHistoryItem__Array>(get_class());
        }
    } // namespace EventHistoryItem__Array
} // namespace app::classes::types
