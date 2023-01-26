#pragma once
#include <Modloader/app/structs/EventHistoryItem.h>
#include <Modloader/app/structs/EventHistoryItem__Array.h>
#include <Modloader/app/structs/EventHistoryItem__Boxed.h>
#include <Modloader/app/structs/EventHistoryItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventHistoryItem {
        inline app::EventHistoryItem__Class** type_info() {
            static app::EventHistoryItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventHistoryItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventHistoryItem__Class* get_class() {
            return il2cpp::get_class<app::EventHistoryItem__Class>(type_info(), "Moon.Timeline", "EventHistoryItem");
        }
        inline app::EventHistoryItem* create() {
            return il2cpp::create_object<app::EventHistoryItem>(get_class());
        }
        inline app::EventHistoryItem__Boxed* box(app::EventHistoryItem value) {
            return il2cpp::box_value<app::EventHistoryItem__Boxed>(get_class(), value);
        }
        inline app::EventHistoryItem__Array* create_array(int size) {
            return il2cpp::array_new<app::EventHistoryItem__Array>(get_class(), size);
        }
        inline app::EventHistoryItem__Array* create_array(const std::vector<app::EventHistoryItem>& items) {
            return il2cpp::array_new<app::EventHistoryItem__Array>(get_class(), items);
        }
    } // namespace EventHistoryItem
} // namespace app::classes::types
