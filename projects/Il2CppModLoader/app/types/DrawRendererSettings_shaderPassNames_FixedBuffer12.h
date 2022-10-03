#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DrawRendererSettings_shaderPassNames_FixedBuffer12 {
        namespace {
            app::DrawRendererSettings_shaderPassNames_FixedBuffer12__Class* type_info_ref = nullptr;
        }
        app::DrawRendererSettings_shaderPassNames_FixedBuffer12__Class** type_info = &type_info_ref;
        inline app::DrawRendererSettings_shaderPassNames_FixedBuffer12__Class* get_class() {
            return il2cpp::get_nested_class<app::DrawRendererSettings_shaderPassNames_FixedBuffer12__Class>(type_info, "UnityEngine.Experimental.Rendering", "DrawRendererSettings", "<shaderPassNames>__FixedBuffer12");
        }
        inline app::DrawRendererSettings_shaderPassNames_FixedBuffer12* create() {
            return il2cpp::create_object<app::DrawRendererSettings_shaderPassNames_FixedBuffer12>(get_class());
        }
        inline app::DrawRendererSettings_shaderPassNames_FixedBuffer12__Boxed* box(app::DrawRendererSettings_shaderPassNames_FixedBuffer12 value) {
            return il2cpp::box_value<app::DrawRendererSettings_shaderPassNames_FixedBuffer12__Boxed>(get_class(), value);
        }
    } // namespace DrawRendererSettings_shaderPassNames_FixedBuffer12
} // namespace app::classes::types
