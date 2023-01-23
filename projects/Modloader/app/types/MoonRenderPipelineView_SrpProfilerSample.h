#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerSample__Class.h>
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerSample.h>
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerSample__Boxed.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_SrpProfilerSample {
        namespace {
            inline app::MoonRenderPipelineView_SrpProfilerSample__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineView_SrpProfilerSample__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineView_SrpProfilerSample__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_SrpProfilerSample__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "SrpProfilerSample");
        }
        inline app::MoonRenderPipelineView_SrpProfilerSample* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_SrpProfilerSample>(get_class());
        }
        inline app::MoonRenderPipelineView_SrpProfilerSample__Boxed* box(app::MoonRenderPipelineView_SrpProfilerSample value) {
            return il2cpp::box_value<app::MoonRenderPipelineView_SrpProfilerSample__Boxed>(get_class(), value);
        }
    } // namespace MoonRenderPipelineView_SrpProfilerSample
} // namespace app::classes::types
