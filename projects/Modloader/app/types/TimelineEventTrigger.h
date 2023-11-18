#pragma once
#include <Modloader/app/structs/TimelineEventTrigger.h>
#include <Modloader/app/structs/TimelineEventTrigger__Array.h>
#include <Modloader/app/structs/TimelineEventTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineEventTrigger {
        inline app::TimelineEventTrigger__Class** type_info() {
            static app::TimelineEventTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineEventTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineEventTrigger__Class* get_class() {
            return il2cpp::get_class<app::TimelineEventTrigger__Class>(type_info(), "", "TimelineEventTrigger");
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
