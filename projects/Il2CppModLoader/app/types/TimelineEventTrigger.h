#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineEventTrigger {
        namespace {
            app::TimelineEventTrigger__Class* type_info_ref = nullptr;
        }
        app::TimelineEventTrigger__Class** type_info = &type_info_ref;
        inline app::TimelineEventTrigger__Class* get_class() {
            return il2cpp::get_class<app::TimelineEventTrigger__Class>(type_info, "", "TimelineEventTrigger");
        }
        inline app::TimelineEventTrigger* create() {
            return il2cpp::create_object<app::TimelineEventTrigger>(get_class());
        }
        inline app::TimelineEventTrigger__Array* create_array(int size) {
            return il2cpp::array_new<app::TimelineEventTrigger__Array>(get_class(), size);
        }
        inline app::TimelineEventTrigger__Array* create_array(const std::vector<app::TimelineEventTrigger*>& items) {
            return il2cpp::array_new<app::TimelineEventTrigger__Array>(get_class(), items);
        }
    } // namespace TimelineEventTrigger
} // namespace app::classes::types
