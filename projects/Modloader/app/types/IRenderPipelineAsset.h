#pragma once
#include <Modloader/app/structs/IRenderPipelineAsset.h>
#include <Modloader/app/structs/IRenderPipelineAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRenderPipelineAsset {
        inline app::IRenderPipelineAsset__Class** type_info() {
            static app::IRenderPipelineAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRenderPipelineAsset__Class**)(modloader::win::memory::resolve_rva(0x0471C2B8));
            }
            return cache;
        }
        inline app::IRenderPipelineAsset__Class* get_class() {
            return il2cpp::get_class<app::IRenderPipelineAsset__Class>(type_info(), "UnityEngine.Experimental.Rendering", "IRenderPipelineAsset");
        }
    } // namespace IRenderPipelineAsset
} // namespace app::classes::types
