#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DistortionAnimator_RendererData_Property {
        inline app::DistortionAnimator_RendererData_Property__Class** type_info = (app::DistortionAnimator_RendererData_Property__Class**)(modloader::win::memory::resolve_rva(0x04726380));
        inline app::DistortionAnimator_RendererData_Property__Class* get_class() {
            return il2cpp::get_nested_class<app::DistortionAnimator_RendererData_Property__Class>(type_info, "", "DistortionAnimator+RendererData", "Property");
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
