#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_GUIColor__Class.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_GUIColor.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_GUIColor__Boxed.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI_GUIColor {
        namespace {
            inline app::MoonRenderPipelineDebugUI_GUIColor__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineDebugUI_GUIColor__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineDebugUI_GUIColor__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebugUI_GUIColor__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebugUI", "GUIColor");
        }
        inline app::MoonRenderPipelineDebugUI_GUIColor* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI_GUIColor>(get_class());
        }
        inline app::MoonRenderPipelineDebugUI_GUIColor__Boxed* box(app::MoonRenderPipelineDebugUI_GUIColor value) {
            return il2cpp::box_value<app::MoonRenderPipelineDebugUI_GUIColor__Boxed>(get_class(), value);
        }
    } // namespace MoonRenderPipelineDebugUI_GUIColor
} // namespace app::classes::types
