#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationMontage_TimelineEventSubscription {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationMontage_TimelineEventSubscription__Class** type_info;
        inline app::AnimationMontage_TimelineEventSubscription__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationMontage_TimelineEventSubscription__Class>(type_info, "Moon", "AnimationMontage", "TimelineEventSubscription");
        }
        inline app::AnimationMontage_TimelineEventSubscription* create() {
            return il2cpp::create_object<app::AnimationMontage_TimelineEventSubscription>(get_class());
        }
        inline app::AnimationMontage_TimelineEventSubscription__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationMontage_TimelineEventSubscription__Array>(get_class(), size);
        }
    } // namespace AnimationMontage_TimelineEventSubscription
} // namespace app::classes::types
