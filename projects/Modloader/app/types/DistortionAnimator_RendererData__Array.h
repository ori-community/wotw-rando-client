#pragma once
#include <Modloader/app/structs/DistortionAnimator_RendererData__Array.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DistortionAnimator_RendererData__Array {
        inline app::DistortionAnimator_RendererData__Array__Class** type_info() {
            static app::DistortionAnimator_RendererData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DistortionAnimator_RendererData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DistortionAnimator_RendererData__Array__Class* get_class() {
            return il2cpp::get_class<app::DistortionAnimator_RendererData__Array__Class>(type_info(), "", "DistortionAnimator+RendererData[]");
        }
        inline app::DistortionAnimator_RendererData__Array* create() {
            return il2cpp::create_object<app::DistortionAnimator_RendererData__Array>(get_class());
        }
    } // namespace DistortionAnimator_RendererData__Array
} // namespace app::classes::types
