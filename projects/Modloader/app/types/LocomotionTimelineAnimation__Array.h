#pragma once
#include <Modloader/app/structs/LocomotionTimelineAnimation__Array.h>
#include <Modloader/app/structs/LocomotionTimelineAnimation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionTimelineAnimation__Array {
        inline app::LocomotionTimelineAnimation__Array__Class** type_info() {
            static app::LocomotionTimelineAnimation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionTimelineAnimation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionTimelineAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::LocomotionTimelineAnimation__Array__Class>(type_info(), "Moon", "LocomotionTimelineAnimation[]");
        }
        inline app::LocomotionTimelineAnimation__Array* create() {
            return il2cpp::create_object<app::LocomotionTimelineAnimation__Array>(get_class());
        }
    } // namespace LocomotionTimelineAnimation__Array
} // namespace app::classes::types
