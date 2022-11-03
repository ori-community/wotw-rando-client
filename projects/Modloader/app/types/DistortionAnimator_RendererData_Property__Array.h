#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DistortionAnimator_RendererData_Property__Array {
        namespace {
            inline app::DistortionAnimator_RendererData_Property__Array__Class* type_info_ref = nullptr;
        }
        inline app::DistortionAnimator_RendererData_Property__Array__Class** type_info = &type_info_ref;
        inline app::DistortionAnimator_RendererData_Property__Array__Class* get_class() {
            return il2cpp::get_class<app::DistortionAnimator_RendererData_Property__Array__Class>(type_info, "", "DistortionAnimator+RendererData+Property[]");
        }
        inline app::DistortionAnimator_RendererData_Property__Array* create() {
            return il2cpp::create_object<app::DistortionAnimator_RendererData_Property__Array>(get_class());
        }
    } // namespace DistortionAnimator_RendererData_Property__Array
} // namespace app::classes::types
