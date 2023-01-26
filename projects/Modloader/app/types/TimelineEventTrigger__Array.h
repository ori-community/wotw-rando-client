#pragma once
#include <Modloader/app/structs/TimelineEventTrigger__Array.h>
#include <Modloader/app/structs/TimelineEventTrigger__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineEventTrigger__Array {
        inline app::TimelineEventTrigger__Array__Class** type_info() {
            static app::TimelineEventTrigger__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineEventTrigger__Array__Class**)(modloader::win::memory::resolve_rva(0x0478CD80));
            }
            return cache;
        }
        inline app::TimelineEventTrigger__Array__Class* get_class() {
            return il2cpp::get_class<app::TimelineEventTrigger__Array__Class>(type_info(), "", "TimelineEventTrigger[]");
        }
        inline app::TimelineEventTrigger__Array* create() {
            return il2cpp::create_object<app::TimelineEventTrigger__Array>(get_class());
        }
    } // namespace TimelineEventTrigger__Array
} // namespace app::classes::types
