#pragma once
#include <Modloader/app/structs/MoonRenderPipelineDebugUI.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI {
        inline app::MoonRenderPipelineDebugUI__Class** type_info() {
            static app::MoonRenderPipelineDebugUI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipelineDebugUI__Class**)(modloader::win::memory::resolve_rva(0x0474DBF8));
            }
            return cache;
        }
        inline app::MoonRenderPipelineDebugUI__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineDebugUI__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineDebugUI");
        }
        inline app::MoonRenderPipelineDebugUI* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI>(get_class());
        }
    } // namespace MoonRenderPipelineDebugUI
} // namespace app::classes::types
