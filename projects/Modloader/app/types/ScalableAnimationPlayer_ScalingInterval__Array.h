#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_ScalingInterval__Array__Class.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_ScalingInterval__Array.h>

namespace app::classes::types {
    namespace ScalableAnimationPlayer_ScalingInterval__Array {
        namespace {
            inline app::ScalableAnimationPlayer_ScalingInterval__Array__Class* type_info_ref = nullptr;
        }
        inline app::ScalableAnimationPlayer_ScalingInterval__Array__Class** type_info = &type_info_ref;
        inline app::ScalableAnimationPlayer_ScalingInterval__Array__Class* get_class() {
            return il2cpp::get_class<app::ScalableAnimationPlayer_ScalingInterval__Array__Class>(type_info, "Moon", "ScalableAnimationPlayer+ScalingInterval[]");
        }
        inline app::ScalableAnimationPlayer_ScalingInterval__Array* create() {
            return il2cpp::create_object<app::ScalableAnimationPlayer_ScalingInterval__Array>(get_class());
        }
    } // namespace ScalableAnimationPlayer_ScalingInterval__Array
} // namespace app::classes::types
