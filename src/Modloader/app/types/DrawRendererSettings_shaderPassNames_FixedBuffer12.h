#pragma once
#include <Modloader/app/structs/DrawRendererSettings_shaderPassNames_FixedBuffer12.h>
#include <Modloader/app/structs/DrawRendererSettings_shaderPassNames_FixedBuffer12__Boxed.h>
#include <Modloader/app/structs/DrawRendererSettings_shaderPassNames_FixedBuffer12__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrawRendererSettings_shaderPassNames_FixedBuffer12 {
        inline app::DrawRendererSettings_shaderPassNames_FixedBuffer12__Class** type_info() {
            static app::DrawRendererSettings_shaderPassNames_FixedBuffer12__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrawRendererSettings_shaderPassNames_FixedBuffer12__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrawRendererSettings_shaderPassNames_FixedBuffer12__Class* get_class() {
            return il2cpp::get_nested_class<app::DrawRendererSettings_shaderPassNames_FixedBuffer12__Class>(type_info(), "UnityEngine.Experimental.Rendering", "DrawRendererSettings", "<shaderPassNames>__FixedBuffer12");
        }
        inline app::DrawRendererSettings_shaderPassNames_FixedBuffer12* create() {
            return il2cpp::create_object<app::DrawRendererSettings_shaderPassNames_FixedBuffer12>(get_class());
        }
        inline app::DrawRendererSettings_shaderPassNames_FixedBuffer12__Boxed* box(app::DrawRendererSettings_shaderPassNames_FixedBuffer12 value) {
            return il2cpp::box_value<app::DrawRendererSettings_shaderPassNames_FixedBuffer12__Boxed>(get_class(), value);
        }
    } // namespace DrawRendererSettings_shaderPassNames_FixedBuffer12
} // namespace app::classes::types
