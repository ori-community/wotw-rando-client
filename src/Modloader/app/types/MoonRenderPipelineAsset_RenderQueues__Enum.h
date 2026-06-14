#pragma once
#include <Modloader/app/structs/MoonRenderPipelineAsset_RenderQueues__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_RenderQueues__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_RenderQueues__Enum {
        inline app::MoonRenderPipelineAsset_RenderQueues__Enum__Class** type_info() {
            static app::MoonRenderPipelineAsset_RenderQueues__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipelineAsset_RenderQueues__Enum__Class**)(modloader::win::memory::resolve_rva(0x04794490));
            }
            return cache;
        }
        inline app::MoonRenderPipelineAsset_RenderQueues__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_RenderQueues__Enum__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineAsset", "RenderQueues");
        }
        inline app::MoonRenderPipelineAsset_RenderQueues__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_RenderQueues__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_RenderQueues__Enum
} // namespace app::classes::types
