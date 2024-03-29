#pragma once
#include <Modloader/app/structs/MoonRenderPipelineView_STLCLightShadeInfo.h>
#include <Modloader/app/structs/MoonRenderPipelineView_STLCLightShadeInfo__Boxed.h>
#include <Modloader/app/structs/MoonRenderPipelineView_STLCLightShadeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_STLCLightShadeInfo {
        inline app::MoonRenderPipelineView_STLCLightShadeInfo__Class** type_info() {
            static app::MoonRenderPipelineView_STLCLightShadeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineView_STLCLightShadeInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineView_STLCLightShadeInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_STLCLightShadeInfo__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineView", "STLCLightShadeInfo");
        }
        inline app::MoonRenderPipelineView_STLCLightShadeInfo* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_STLCLightShadeInfo>(get_class());
        }
        inline app::MoonRenderPipelineView_STLCLightShadeInfo__Boxed* box(app::MoonRenderPipelineView_STLCLightShadeInfo value) {
            return il2cpp::box_value<app::MoonRenderPipelineView_STLCLightShadeInfo__Boxed>(get_class(), value);
        }
    } // namespace MoonRenderPipelineView_STLCLightShadeInfo
} // namespace app::classes::types
