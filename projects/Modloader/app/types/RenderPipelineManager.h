#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderPipelineManager {
        inline app::RenderPipelineManager__Class** type_info = (app::RenderPipelineManager__Class**)(modloader::win::memory::resolve_rva(0x047063F8));
        inline app::RenderPipelineManager__Class* get_class() {
            return il2cpp::get_class<app::RenderPipelineManager__Class>(type_info, "UnityEngine.Experimental.Rendering", "RenderPipelineManager");
        }
        inline app::RenderPipelineManager* create() {
            return il2cpp::create_object<app::RenderPipelineManager>(get_class());
        }
    } // namespace RenderPipelineManager
} // namespace app::classes::types
