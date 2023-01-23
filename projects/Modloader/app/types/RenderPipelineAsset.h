#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RenderPipelineAsset__Class.h>
#include <Modloader/app/structs/RenderPipelineAsset.h>

namespace app::classes::types {
    namespace RenderPipelineAsset {
        inline app::RenderPipelineAsset__Class** type_info = (app::RenderPipelineAsset__Class**)(modloader::win::memory::resolve_rva(0x0475D0F8));
        inline app::RenderPipelineAsset__Class* get_class() {
            return il2cpp::get_class<app::RenderPipelineAsset__Class>(type_info, "UnityEngine.Experimental.Rendering", "RenderPipelineAsset");
        }
        inline app::RenderPipelineAsset* create() {
            return il2cpp::create_object<app::RenderPipelineAsset>(get_class());
        }
    } // namespace RenderPipelineAsset
} // namespace app::classes::types
