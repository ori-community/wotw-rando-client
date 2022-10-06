#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScalableAnimationPlayer_ScalingInterval {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScalableAnimationPlayer_ScalingInterval__Class** type_info;
        inline app::ScalableAnimationPlayer_ScalingInterval__Class* get_class() {
            return il2cpp::get_nested_class<app::ScalableAnimationPlayer_ScalingInterval__Class>(type_info, "Moon", "ScalableAnimationPlayer", "ScalingInterval");
        }
        inline app::ScalableAnimationPlayer_ScalingInterval* create() {
            return il2cpp::create_object<app::ScalableAnimationPlayer_ScalingInterval>(get_class());
        }
        inline app::ScalableAnimationPlayer_ScalingInterval__Array* create_array(int size) {
            return il2cpp::array_new<app::ScalableAnimationPlayer_ScalingInterval__Array>(get_class(), size);
        }
        inline app::ScalableAnimationPlayer_ScalingInterval__Array* create_array(const std::vector<app::ScalableAnimationPlayer_ScalingInterval*>& items) {
            return il2cpp::array_new<app::ScalableAnimationPlayer_ScalingInterval__Array>(get_class(), items);
        }
    } // namespace ScalableAnimationPlayer_ScalingInterval
} // namespace app::classes::types
