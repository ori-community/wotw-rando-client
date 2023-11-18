#pragma once
#include <Modloader/app/structs/MoonRenderPipelineView_Samplers.h>
#include <Modloader/app/structs/MoonRenderPipelineView_Samplers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_Samplers {
        inline app::MoonRenderPipelineView_Samplers__Class** type_info() {
            static app::MoonRenderPipelineView_Samplers__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipelineView_Samplers__Class**)(modloader::win::memory::resolve_rva(0x04790FC0));
            }
            return cache;
        }
        inline app::MoonRenderPipelineView_Samplers__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_Samplers__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineView", "Samplers");
        }
        inline app::MoonRenderPipelineView_Samplers* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_Samplers>(get_class());
        }
    } // namespace MoonRenderPipelineView_Samplers
} // namespace app::classes::types
