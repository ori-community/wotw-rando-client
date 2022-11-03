#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyTransparencyAnimator_RendererData__Array {
        namespace {
            inline app::LegacyTransparencyAnimator_RendererData__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacyTransparencyAnimator_RendererData__Array__Class** type_info = &type_info_ref;
        inline app::LegacyTransparencyAnimator_RendererData__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyTransparencyAnimator_RendererData__Array__Class>(type_info, "", "LegacyTransparencyAnimator+RendererData[]");
        }
        inline app::LegacyTransparencyAnimator_RendererData__Array* create() {
            return il2cpp::create_object<app::LegacyTransparencyAnimator_RendererData__Array>(get_class());
        }
    } // namespace LegacyTransparencyAnimator_RendererData__Array
} // namespace app::classes::types
