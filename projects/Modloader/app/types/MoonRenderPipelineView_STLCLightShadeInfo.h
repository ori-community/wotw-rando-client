#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonRenderPipelineView_STLCLightShadeInfo__Class.h>
#include <Modloader/app/structs/MoonRenderPipelineView_STLCLightShadeInfo.h>
#include <Modloader/app/structs/MoonRenderPipelineView_STLCLightShadeInfo__Boxed.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_STLCLightShadeInfo {
        namespace {
            inline app::MoonRenderPipelineView_STLCLightShadeInfo__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineView_STLCLightShadeInfo__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineView_STLCLightShadeInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_STLCLightShadeInfo__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "STLCLightShadeInfo");
        }
        inline app::MoonRenderPipelineView_STLCLightShadeInfo* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_STLCLightShadeInfo>(get_class());
        }
        inline app::MoonRenderPipelineView_STLCLightShadeInfo__Boxed* box(app::MoonRenderPipelineView_STLCLightShadeInfo value) {
            return il2cpp::box_value<app::MoonRenderPipelineView_STLCLightShadeInfo__Boxed>(get_class(), value);
        }
    } // namespace MoonRenderPipelineView_STLCLightShadeInfo
} // namespace app::classes::types
