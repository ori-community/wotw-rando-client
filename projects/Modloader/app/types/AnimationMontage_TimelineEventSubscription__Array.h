#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationMontage_TimelineEventSubscription__Array__Class.h>
#include <Modloader/app/structs/AnimationMontage_TimelineEventSubscription__Array.h>

namespace app::classes::types {
    namespace AnimationMontage_TimelineEventSubscription__Array {
        namespace {
            inline app::AnimationMontage_TimelineEventSubscription__Array__Class* type_info_ref = nullptr;
        }
        inline app::AnimationMontage_TimelineEventSubscription__Array__Class** type_info = &type_info_ref;
        inline app::AnimationMontage_TimelineEventSubscription__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationMontage_TimelineEventSubscription__Array__Class>(type_info, "Moon", "AnimationMontage+TimelineEventSubscription[]");
        }
        inline app::AnimationMontage_TimelineEventSubscription__Array* create() {
            return il2cpp::create_object<app::AnimationMontage_TimelineEventSubscription__Array>(get_class());
        }
    } // namespace AnimationMontage_TimelineEventSubscription__Array
} // namespace app::classes::types
