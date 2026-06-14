#pragma once
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame.h>
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame__Boxed.h>
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_SrpProfilerFrame {
        inline app::MoonRenderPipelineView_SrpProfilerFrame__Class** type_info() {
            static app::MoonRenderPipelineView_SrpProfilerFrame__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineView_SrpProfilerFrame__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineView_SrpProfilerFrame__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_SrpProfilerFrame__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineView", "SrpProfilerFrame");
        }
        inline app::MoonRenderPipelineView_SrpProfilerFrame* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_SrpProfilerFrame>(get_class());
        }
        inline app::MoonRenderPipelineView_SrpProfilerFrame__Boxed* box(app::MoonRenderPipelineView_SrpProfilerFrame value) {
            return il2cpp::box_value<app::MoonRenderPipelineView_SrpProfilerFrame__Boxed>(get_class(), value);
        }
    } // namespace MoonRenderPipelineView_SrpProfilerFrame
} // namespace app::classes::types
