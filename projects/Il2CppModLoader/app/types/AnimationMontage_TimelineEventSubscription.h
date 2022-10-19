#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationMontage_TimelineEventSubscription {
        inline app::AnimationMontage_TimelineEventSubscription__Class** type_info = (app::AnimationMontage_TimelineEventSubscription__Class**)(modloader::win::memory::resolve_rva(0x0477CD18));
        inline app::AnimationMontage_TimelineEventSubscription__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationMontage_TimelineEventSubscription__Class>(type_info, "Moon", "AnimationMontage", "TimelineEventSubscription");
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
