#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI__Class.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI {
        inline app::MoonRenderPipelineDebugUI__Class** type_info = (app::MoonRenderPipelineDebugUI__Class**)(modloader::win::memory::resolve_rva(0x0474DBF8));
        inline app::MoonRenderPipelineDebugUI__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineDebugUI__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebugUI");
        }
        inline app::MoonRenderPipelineDebugUI* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI>(get_class());
        }
    } // namespace MoonRenderPipelineDebugUI
} // namespace app::classes::types
