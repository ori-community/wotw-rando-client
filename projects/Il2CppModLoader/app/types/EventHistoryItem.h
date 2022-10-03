#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventHistoryItem {
        namespace {
            app::EventHistoryItem__Class* type_info_ref = nullptr;
        }
        app::EventHistoryItem__Class** type_info = &type_info_ref;
        inline app::EventHistoryItem__Class* get_class() {
            return il2cpp::get_class<app::EventHistoryItem__Class>(type_info, "Moon.Timeline", "EventHistoryItem");
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
    } // namespace EventHistoryItem
} // namespace app::classes::types
