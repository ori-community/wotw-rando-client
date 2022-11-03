#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_Samplers {
        inline app::MoonRenderPipelineView_Samplers__Class** type_info = (app::MoonRenderPipelineView_Samplers__Class**)(modloader::win::memory::resolve_rva(0x04790FC0));
        inline app::MoonRenderPipelineView_Samplers__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_Samplers__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "Samplers");
        }
        inline app::MoonRenderPipelineView_Samplers* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_Samplers>(get_class());
        }
    } // namespace MoonRenderPipelineView_Samplers
} // namespace app::classes::types
