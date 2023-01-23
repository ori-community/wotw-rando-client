#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_ScalingInterval__Class.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_ScalingInterval.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_ScalingInterval__Array.h>

namespace app::classes::types {
    namespace ScalableAnimationPlayer_ScalingInterval {
        inline app::ScalableAnimationPlayer_ScalingInterval__Class** type_info = (app::ScalableAnimationPlayer_ScalingInterval__Class**)(modloader::win::memory::resolve_rva(0x04740108));
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
