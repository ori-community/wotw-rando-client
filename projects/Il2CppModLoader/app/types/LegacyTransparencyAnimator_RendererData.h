#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyTransparencyAnimator_RendererData {
        inline app::LegacyTransparencyAnimator_RendererData__Class** type_info = (app::LegacyTransparencyAnimator_RendererData__Class**)(modloader::win::memory::resolve_rva(0x04720800));
        inline app::LegacyTransparencyAnimator_RendererData__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyTransparencyAnimator_RendererData__Class>(type_info, "", "LegacyTransparencyAnimator", "RendererData");
        }
        inline app::LegacyTransparencyAnimator_RendererData* create() {
            return il2cpp::create_object<app::LegacyTransparencyAnimator_RendererData>(get_class());
        }
        inline app::LegacyTransparencyAnimator_RendererData__Boxed* box(app::LegacyTransparencyAnimator_RendererData value) {
            return il2cpp::box_value<app::LegacyTransparencyAnimator_RendererData__Boxed>(get_class(), value);
        }
        inline app::LegacyTransparencyAnimator_RendererData__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyTransparencyAnimator_RendererData__Array>(get_class(), size);
        }
        inline app::LegacyTransparencyAnimator_RendererData__Array* create_array(const std::vector<app::LegacyTransparencyAnimator_RendererData>& items) {
            return il2cpp::array_new<app::LegacyTransparencyAnimator_RendererData__Array>(get_class(), items);
        }
    } // namespace LegacyTransparencyAnimator_RendererData
} // namespace app::classes::types
