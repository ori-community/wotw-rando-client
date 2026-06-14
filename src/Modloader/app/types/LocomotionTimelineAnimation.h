#pragma once
#include <Modloader/app/structs/LocomotionTimelineAnimation.h>
#include <Modloader/app/structs/LocomotionTimelineAnimation__Array.h>
#include <Modloader/app/structs/LocomotionTimelineAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionTimelineAnimation {
        inline app::LocomotionTimelineAnimation__Class** type_info() {
            static app::LocomotionTimelineAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionTimelineAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionTimelineAnimation__Class* get_class() {
            return il2cpp::get_class<app::LocomotionTimelineAnimation__Class>(type_info(), "Moon", "LocomotionTimelineAnimation");
        }
        inline app::LocomotionTimelineAnimation* create() {
            return il2cpp::create_object<app::LocomotionTimelineAnimation>(get_class());
        }
        inline app::LocomotionTimelineAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::LocomotionTimelineAnimation__Array>(get_class(), size);
        }
        inline app::LocomotionTimelineAnimation__Array* create_array(const std::vector<app::LocomotionTimelineAnimation*>& items) {
            return il2cpp::array_new<app::LocomotionTimelineAnimation__Array>(get_class(), items);
        }
    } // namespace LocomotionTimelineAnimation
} // namespace app::classes::types
