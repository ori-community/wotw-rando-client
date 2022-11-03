#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_FinalSliceCompositionInfo {
        namespace {
            inline app::MoonRenderPipelineView_FinalSliceCompositionInfo__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineView_FinalSliceCompositionInfo__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineView_FinalSliceCompositionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_FinalSliceCompositionInfo__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "FinalSliceCompositionInfo");
        }
        inline app::MoonRenderPipelineView_FinalSliceCompositionInfo* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_FinalSliceCompositionInfo>(get_class());
        }
        inline app::MoonRenderPipelineView_FinalSliceCompositionInfo__Boxed* box(app::MoonRenderPipelineView_FinalSliceCompositionInfo value) {
            return il2cpp::box_value<app::MoonRenderPipelineView_FinalSliceCompositionInfo__Boxed>(get_class(), value);
        }
        inline app::MoonRenderPipelineView_FinalSliceCompositionInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonRenderPipelineView_FinalSliceCompositionInfo__Array>(get_class(), size);
        }
        inline app::MoonRenderPipelineView_FinalSliceCompositionInfo__Array* create_array(const std::vector<app::MoonRenderPipelineView_FinalSliceCompositionInfo>& items) {
            return il2cpp::array_new<app::MoonRenderPipelineView_FinalSliceCompositionInfo__Array>(get_class(), items);
        }
    } // namespace MoonRenderPipelineView_FinalSliceCompositionInfo
} // namespace app::classes::types
