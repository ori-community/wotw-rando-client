#pragma once
#include <Modloader/app/structs/ScalableAnimationPlayer_ScenarioPlaybackData__Array.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_ScenarioPlaybackData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScalableAnimationPlayer_ScenarioPlaybackData__Array {
        inline app::ScalableAnimationPlayer_ScenarioPlaybackData__Array__Class** type_info() {
            static app::ScalableAnimationPlayer_ScenarioPlaybackData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScalableAnimationPlayer_ScenarioPlaybackData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScalableAnimationPlayer_ScenarioPlaybackData__Array__Class* get_class() {
            return il2cpp::get_class<app::ScalableAnimationPlayer_ScenarioPlaybackData__Array__Class>(type_info(), "Moon", "ScalableAnimationPlayer+ScenarioPlaybackData[]");
        }
        inline app::ScalableAnimationPlayer_ScenarioPlaybackData__Array* create() {
            return il2cpp::create_object<app::ScalableAnimationPlayer_ScenarioPlaybackData__Array>(get_class());
        }
    } // namespace ScalableAnimationPlayer_ScenarioPlaybackData__Array
} // namespace app::classes::types
