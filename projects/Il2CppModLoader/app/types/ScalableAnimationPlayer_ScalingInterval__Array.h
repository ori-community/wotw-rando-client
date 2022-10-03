#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScalableAnimationPlayer_ScalingInterval__Array {
        namespace {
            app::ScalableAnimationPlayer_ScalingInterval__Array__Class* type_info_ref = nullptr;
        }
        app::ScalableAnimationPlayer_ScalingInterval__Array__Class** type_info = &type_info_ref;
        inline app::ScalableAnimationPlayer_ScalingInterval__Array__Class* get_class() {
            return il2cpp::get_class<app::ScalableAnimationPlayer_ScalingInterval__Array__Class>(type_info, "Moon", "ScalableAnimationPlayer+ScalingInterval[]");
        }
        inline app::ScalableAnimationPlayer_ScalingInterval__Array* create() {
            return il2cpp::create_object<app::ScalableAnimationPlayer_ScalingInterval__Array>(get_class());
        }
    } // namespace ScalableAnimationPlayer_ScalingInterval__Array
} // namespace app::classes::types
