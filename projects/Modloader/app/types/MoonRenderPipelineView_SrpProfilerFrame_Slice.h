#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame_Slice__Class.h>
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame_Slice.h>
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame_Slice__Boxed.h>
#include <Modloader/app/structs/MoonRenderPipelineView_SrpProfilerFrame_Slice__Array.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_SrpProfilerFrame_Slice {
        namespace {
            inline app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView+SrpProfilerFrame", "Slice");
        }
        inline app::MoonRenderPipelineView_SrpProfilerFrame_Slice* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_SrpProfilerFrame_Slice>(get_class());
        }
        inline app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Boxed* box(app::MoonRenderPipelineView_SrpProfilerFrame_Slice value) {
            return il2cpp::box_value<app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Boxed>(get_class(), value);
        }
        inline app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array>(get_class(), size);
        }
        inline app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array* create_array(const std::vector<app::MoonRenderPipelineView_SrpProfilerFrame_Slice>& items) {
            return il2cpp::array_new<app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array>(get_class(), items);
        }
    } // namespace MoonRenderPipelineView_SrpProfilerFrame_Slice
} // namespace app::classes::types
