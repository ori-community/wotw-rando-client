#pragma once
#include <Modloader/app/structs/AnimationMontage_TimelineEventSubscription__Array.h>
#include <Modloader/app/structs/AnimationMontage_TimelineEventSubscription__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMontage_TimelineEventSubscription__Array {
        inline app::AnimationMontage_TimelineEventSubscription__Array__Class** type_info() {
            static app::AnimationMontage_TimelineEventSubscription__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationMontage_TimelineEventSubscription__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationMontage_TimelineEventSubscription__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationMontage_TimelineEventSubscription__Array__Class>(type_info(), "Moon", "AnimationMontage+TimelineEventSubscription[]");
        }
        inline app::AnimationMontage_TimelineEventSubscription__Array* create() {
            return il2cpp::create_object<app::AnimationMontage_TimelineEventSubscription__Array>(get_class());
        }
    } // namespace AnimationMontage_TimelineEventSubscription__Array
} // namespace app::classes::types
