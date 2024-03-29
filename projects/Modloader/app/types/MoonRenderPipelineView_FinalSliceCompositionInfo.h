#pragma once
#include <Modloader/app/structs/MoonRenderPipelineView_FinalSliceCompositionInfo.h>
#include <Modloader/app/structs/MoonRenderPipelineView_FinalSliceCompositionInfo__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineView_FinalSliceCompositionInfo__Boxed.h>
#include <Modloader/app/structs/MoonRenderPipelineView_FinalSliceCompositionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_FinalSliceCompositionInfo {
        inline app::MoonRenderPipelineView_FinalSliceCompositionInfo__Class** type_info() {
            static app::MoonRenderPipelineView_FinalSliceCompositionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineView_FinalSliceCompositionInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineView_FinalSliceCompositionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_FinalSliceCompositionInfo__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineView", "FinalSliceCompositionInfo");
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
