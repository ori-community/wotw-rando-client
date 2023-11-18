#pragma once
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_GUIColor.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_GUIColor__Boxed.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_GUIColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI_GUIColor {
        inline app::MoonRenderPipelineDebugUI_GUIColor__Class** type_info() {
            static app::MoonRenderPipelineDebugUI_GUIColor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineDebugUI_GUIColor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineDebugUI_GUIColor__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebugUI_GUIColor__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineDebugUI", "GUIColor");
        }
        inline app::MoonRenderPipelineDebugUI_GUIColor* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI_GUIColor>(get_class());
        }
        inline app::MoonRenderPipelineDebugUI_GUIColor__Boxed* box(app::MoonRenderPipelineDebugUI_GUIColor value) {
            return il2cpp::box_value<app::MoonRenderPipelineDebugUI_GUIColor__Boxed>(get_class(), value);
        }
    } // namespace MoonRenderPipelineDebugUI_GUIColor
} // namespace app::classes::types
