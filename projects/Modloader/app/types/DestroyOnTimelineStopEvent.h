#pragma once
#include <Modloader/app/structs/DestroyOnTimelineStopEvent.h>
#include <Modloader/app/structs/DestroyOnTimelineStopEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyOnTimelineStopEvent {
        inline app::DestroyOnTimelineStopEvent__Class** type_info() {
            static app::DestroyOnTimelineStopEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyOnTimelineStopEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyOnTimelineStopEvent__Class* get_class() {
            return il2cpp::get_class<app::DestroyOnTimelineStopEvent__Class>(type_info(), "", "DestroyOnTimelineStopEvent");
        }
        inline app::DestroyOnTimelineStopEvent* create() {
            return il2cpp::create_object<app::DestroyOnTimelineStopEvent>(get_class());
        }
    } // namespace DestroyOnTimelineStopEvent
} // namespace app::classes::types
