#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyMaterialFloatAnimator_RendererData__Array {
        namespace {
            inline app::LegacyMaterialFloatAnimator_RendererData__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacyMaterialFloatAnimator_RendererData__Array__Class** type_info = &type_info_ref;
        inline app::LegacyMaterialFloatAnimator_RendererData__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyMaterialFloatAnimator_RendererData__Array__Class>(type_info, "", "LegacyMaterialFloatAnimator+RendererData[]");
        }
        inline app::LegacyMaterialFloatAnimator_RendererData__Array* create() {
            return il2cpp::create_object<app::LegacyMaterialFloatAnimator_RendererData__Array>(get_class());
        }
    } // namespace LegacyMaterialFloatAnimator_RendererData__Array
} // namespace app::classes::types
