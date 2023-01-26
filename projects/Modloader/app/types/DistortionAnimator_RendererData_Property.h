#pragma once
#include <Modloader/app/structs/DistortionAnimator_RendererData_Property.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData_Property__Array.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData_Property__Boxed.h>
#include <Modloader/app/structs/DistortionAnimator_RendererData_Property__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DistortionAnimator_RendererData_Property {
        inline app::DistortionAnimator_RendererData_Property__Class** type_info() {
            static app::DistortionAnimator_RendererData_Property__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DistortionAnimator_RendererData_Property__Class**)(modloader::win::memory::resolve_rva(0x04726380));
            }
            return cache;
        }
        inline app::DistortionAnimator_RendererData_Property__Class* get_class() {
            return il2cpp::get_nested_class<app::DistortionAnimator_RendererData_Property__Class>(type_info(), "", "DistortionAnimator+RendererData", "Property");
        }
        inline app::DistortionAnimator_RendererData_Property* create() {
            return il2cpp::create_object<app::DistortionAnimator_RendererData_Property>(get_class());
        }
        inline app::DistortionAnimator_RendererData_Property__Boxed* box(app::DistortionAnimator_RendererData_Property value) {
            return il2cpp::box_value<app::DistortionAnimator_RendererData_Property__Boxed>(get_class(), value);
        }
        inline app::DistortionAnimator_RendererData_Property__Array* create_array(int size) {
            return il2cpp::array_new<app::DistortionAnimator_RendererData_Property__Array>(get_class(), size);
        }
        inline app::DistortionAnimator_RendererData_Property__Array* create_array(const std::vector<app::DistortionAnimator_RendererData_Property>& items) {
            return il2cpp::array_new<app::DistortionAnimator_RendererData_Property__Array>(get_class(), items);
        }
    } // namespace DistortionAnimator_RendererData_Property
} // namespace app::classes::types
