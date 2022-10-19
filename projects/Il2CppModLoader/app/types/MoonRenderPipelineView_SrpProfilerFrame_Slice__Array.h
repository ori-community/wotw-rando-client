#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_SrpProfilerFrame_Slice__Array {
        namespace {
            inline app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView+SrpProfilerFrame+Slice[]");
        }
        inline app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_SrpProfilerFrame_Slice__Array>(get_class());
        }
    } // namespace MoonRenderPipelineView_SrpProfilerFrame_Slice__Array
} // namespace app::classes::types
