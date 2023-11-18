#pragma once
#include <Modloader/app/structs/DistortionAnimator_RendererData.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData__Array.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData__Boxed.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DistortionAnimator_RendererData {
        inline app::DistortionAnimator_RendererData__Class** type_info() {
            static app::DistortionAnimator_RendererData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DistortionAnimator_RendererData__Class**)(modloader::win::memory::resolve_rva(0x0476B7E0));
            }
            return cache;
        }
        inline app::DistortionAnimator_RendererData__Class* get_class() {
            return il2cpp::get_nested_class<app::DistortionAnimator_RendererData__Class>(type_info(), "", "DistortionAnimator", "RendererData");
        }
        inline app::DistortionAnimator_RendererData* create() {
            return il2cpp::create_object<app::DistortionAnimator_RendererData>(get_class());
        }
        inline app::DistortionAnimator_RendererData__Boxed* box(app::DistortionAnimator_RendererData value) {
            return il2cpp::box_value<app::DistortionAnimator_RendererData__Boxed>(get_class(), value);
        }
        inline app::DistortionAnimator_RendererData__Array* create_array(int size) {
            return il2cpp::array_new<app::DistortionAnimator_RendererData__Array>(get_class(), size);
        }
        inline app::DistortionAnimator_RendererData__Array* create_array(const std::vector<app::DistortionAnimator_RendererData>& items) {
            return il2cpp::array_new<app::DistortionAnimator_RendererData__Array>(get_class(), items);
        }
    } // namespace DistortionAnimator_RendererData
} // namespace app::classes::types
