#pragma once
#include <Modloader/app/structs/AnimationMontage_TimelineEventSubscription.h>
#include <Modloader/app/structs/AnimationMontage_TimelineEventSubscription__Array.h>
#include <Modloader/app/structs/AnimationMontage_TimelineEventSubscription__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMontage_TimelineEventSubscription {
        inline app::AnimationMontage_TimelineEventSubscription__Class** type_info() {
            static app::AnimationMontage_TimelineEventSubscription__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationMontage_TimelineEventSubscription__Class**)(modloader::win::memory::resolve_rva(0x0477CD18));
            }
            return cache;
        }
        inline app::AnimationMontage_TimelineEventSubscription__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationMontage_TimelineEventSubscription__Class>(type_info(), "Moon", "AnimationMontage", "TimelineEventSubscription");
        }
        inline app::AnimationMontage_TimelineEventSubscription* create() {
            return il2cpp::create_object<app::AnimationMontage_TimelineEventSubscription>(get_class());
        }
        inline app::AnimationMontage_TimelineEventSubscription__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationMontage_TimelineEventSubscription__Array>(get_class(), size);
        }
        inline app::AnimationMontage_TimelineEventSubscription__Array* create_array(const std::vector<app::AnimationMontage_TimelineEventSubscription*>& items) {
            return il2cpp::array_new<app::AnimationMontage_TimelineEventSubscription__Array>(get_class(), items);
        }
    } // namespace AnimationMontage_TimelineEventSubscription
} // namespace app::classes::types
