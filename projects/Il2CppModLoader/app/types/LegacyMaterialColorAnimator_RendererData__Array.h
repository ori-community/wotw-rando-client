#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyMaterialColorAnimator_RendererData__Array {
        namespace {
            inline app::LegacyMaterialColorAnimator_RendererData__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacyMaterialColorAnimator_RendererData__Array__Class** type_info = &type_info_ref;
        inline app::LegacyMaterialColorAnimator_RendererData__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyMaterialColorAnimator_RendererData__Array__Class>(type_info, "", "LegacyMaterialColorAnimator+RendererData[]");
        }
        inline app::LegacyMaterialColorAnimator_RendererData__Array* create() {
            return il2cpp::create_object<app::LegacyMaterialColorAnimator_RendererData__Array>(get_class());
        }
    } // namespace LegacyMaterialColorAnimator_RendererData__Array
} // namespace app::classes::types
