#pragma once
#include <Modloader/app/structs/ShaderID_DistortionAnimator.h>
#include <Modloader/app/structs/ShaderID_DistortionAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DistortionAnimator {
        inline app::ShaderID_DistortionAnimator__Class** type_info() {
            static app::ShaderID_DistortionAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_DistortionAnimator__Class**)(modloader::win::memory::resolve_rva(0x0478F798));
            }
            return cache;
        }
        inline app::ShaderID_DistortionAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DistortionAnimator__Class>(type_info(), "", "ShaderID_DistortionAnimator");
        }
        inline app::ShaderID_DistortionAnimator* create() {
            return il2cpp::create_object<app::ShaderID_DistortionAnimator>(get_class());
        }
    } // namespace ShaderID_DistortionAnimator
} // namespace app::classes::types
