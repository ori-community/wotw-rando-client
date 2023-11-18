#pragma once
#include <Modloader/app/structs/TimelineMarkerRecord__Array.h>
#include <Modloader/app/structs/TimelineMarkerRecord__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineMarkerRecord__Array {
        inline app::TimelineMarkerRecord__Array__Class** type_info() {
            static app::TimelineMarkerRecord__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineMarkerRecord__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineMarkerRecord__Array__Class* get_class() {
            return il2cpp::get_class<app::TimelineMarkerRecord__Array__Class>(type_info(), "Moon.Timeline", "TimelineMarkerRecord[]");
        }
        inline app::TimelineMarkerRecord__Array* create() {
            return il2cpp::create_object<app::TimelineMarkerRecord__Array>(get_class());
        }
    } // namespace TimelineMarkerRecord__Array
} // namespace app::classes::types
