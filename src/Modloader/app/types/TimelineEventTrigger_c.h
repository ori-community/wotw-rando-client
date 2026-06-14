#pragma once
#include <Modloader/app/structs/TimelineEventTrigger_c.h>
#include <Modloader/app/structs/TimelineEventTrigger_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineEventTrigger_c {
        inline app::TimelineEventTrigger_c__Class** type_info() {
            static app::TimelineEventTrigger_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineEventTrigger_c__Class**)(modloader::win::memory::resolve_rva(0x047237D0));
            }
            return cache;
        }
        inline app::TimelineEventTrigger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineEventTrigger_c__Class>(type_info(), "", "TimelineEventTrigger", "<>c");
        }
        inline app::TimelineEventTrigger_c* create() {
            return il2cpp::create_object<app::TimelineEventTrigger_c>(get_class());
        }
    } // namespace TimelineEventTrigger_c
} // namespace app::classes::types
