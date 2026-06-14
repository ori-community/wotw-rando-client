#pragma once
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame_Slice__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_SrpProfilerFrame_Slice__Array {
        inline app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__Class** type_info() {
            static app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineView+SrpProfilerFrame+Slice[]");
        }
        inline app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array>(get_class());
        }
    } // namespace MoonRenderPipelineView_SrpProfilerFrame_Slice__Array
} // namespace app::classes::types
