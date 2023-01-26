#pragma once
#include <Modloader/app/structs/MoonRenderPipelineAsset.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset {
        inline app::MoonRenderPipelineAsset__Class** type_info() {
            static app::MoonRenderPipelineAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipelineAsset__Class**)(modloader::win::memory::resolve_rva(0x0474DB10));
            }
            return cache;
        }
        inline app::MoonRenderPipelineAsset__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineAsset__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineAsset");
        }
        inline app::MoonRenderPipelineAsset* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset>(get_class());
        }
    } // namespace MoonRenderPipelineAsset
} // namespace app::classes::types
