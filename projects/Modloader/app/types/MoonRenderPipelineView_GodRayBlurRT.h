#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonRenderPipelineView_GodRayBlurRT__Class.h>
#include <Modloader/app/structs/MoonRenderPipelineView_GodRayBlurRT.h>
#include <Modloader/app/structs/MoonRenderPipelineView_GodRayBlurRT__Array.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_GodRayBlurRT {
        inline app::MoonRenderPipelineView_GodRayBlurRT__Class** type_info = (app::MoonRenderPipelineView_GodRayBlurRT__Class**)(modloader::win::memory::resolve_rva(0x0471C458));
        inline app::MoonRenderPipelineView_GodRayBlurRT__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_GodRayBlurRT__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "GodRayBlurRT");
        }
        inline app::MoonRenderPipelineView_GodRayBlurRT* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_GodRayBlurRT>(get_class());
        }
        inline app::MoonRenderPipelineView_GodRayBlurRT__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonRenderPipelineView_GodRayBlurRT__Array>(get_class(), size);
        }
        inline app::MoonRenderPipelineView_GodRayBlurRT__Array* create_array(const std::vector<app::MoonRenderPipelineView_GodRayBlurRT*>& items) {
            return il2cpp::array_new<app::MoonRenderPipelineView_GodRayBlurRT__Array>(get_class(), items);
        }
    } // namespace MoonRenderPipelineView_GodRayBlurRT
} // namespace app::classes::types
