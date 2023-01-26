#pragma once
#include <Modloader/app/structs/TimelineInterruptionAnimatorEntity.h>
#include <Modloader/app/structs/TimelineInterruptionAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineInterruptionAnimatorEntity {
        inline app::TimelineInterruptionAnimatorEntity__Class** type_info() {
            static app::TimelineInterruptionAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineInterruptionAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineInterruptionAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::TimelineInterruptionAnimatorEntity__Class>(type_info(), "Moon.Timeline", "TimelineInterruptionAnimatorEntity");
        }
        inline app::TimelineInterruptionAnimatorEntity* create() {
            return il2cpp::create_object<app::TimelineInterruptionAnimatorEntity>(get_class());
        }
    } // namespace TimelineInterruptionAnimatorEntity
} // namespace app::classes::types
