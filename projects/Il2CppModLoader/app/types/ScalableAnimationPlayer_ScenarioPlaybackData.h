#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScalableAnimationPlayer_ScenarioPlaybackData {
        inline app::ScalableAnimationPlayer_ScenarioPlaybackData__Class** type_info = (app::ScalableAnimationPlayer_ScenarioPlaybackData__Class**)(modloader::win::memory::resolve_rva(0x047304C8));
        inline app::ScalableAnimationPlayer_ScenarioPlaybackData__Class* get_class() {
            return il2cpp::get_nested_class<app::ScalableAnimationPlayer_ScenarioPlaybackData__Class>(type_info, "Moon", "ScalableAnimationPlayer", "ScenarioPlaybackData");
        }
        inline app::ScalableAnimationPlayer_ScenarioPlaybackData* create() {
            return il2cpp::create_object<app::ScalableAnimationPlayer_ScenarioPlaybackData>(get_class());
        }
        inline app::ScalableAnimationPlayer_ScenarioPlaybackData__Boxed* box(app::ScalableAnimationPlayer_ScenarioPlaybackData value) {
            return il2cpp::box_value<app::ScalableAnimationPlayer_ScenarioPlaybackData__Boxed>(get_class(), value);
        }
        inline app::ScalableAnimationPlayer_ScenarioPlaybackData__Array* create_array(int size) {
            return il2cpp::array_new<app::ScalableAnimationPlayer_ScenarioPlaybackData__Array>(get_class(), size);
        }
        inline app::ScalableAnimationPlayer_ScenarioPlaybackData__Array* create_array(const std::vector<app::ScalableAnimationPlayer_ScenarioPlaybackData>& items) {
            return il2cpp::array_new<app::ScalableAnimationPlayer_ScenarioPlaybackData__Array>(get_class(), items);
        }
    } // namespace ScalableAnimationPlayer_ScenarioPlaybackData
} // namespace app::classes::types
