#pragma once
#include <Modloader/app/structs/TimelineActionTrigger.h>
#include <Modloader/app/structs/TimelineActionTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineActionTrigger {
        inline app::TimelineActionTrigger__Class** type_info() {
            static app::TimelineActionTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineActionTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineActionTrigger__Class* get_class() {
            return il2cpp::get_class<app::TimelineActionTrigger__Class>(type_info(), "", "TimelineActionTrigger");
        }
        inline app::TimelineActionTrigger* create() {
            return il2cpp::create_object<app::TimelineActionTrigger>(get_class());
        }
    } // namespace TimelineActionTrigger
} // namespace app::classes::types
