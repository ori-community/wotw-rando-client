#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_RenderQueues__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderPipelineAsset_RenderQueues__Enum__Class** type_info;
        inline app::MoonRenderPipelineAsset_RenderQueues__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_RenderQueues__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset", "RenderQueues");
        }
        inline app::MoonRenderPipelineAsset_RenderQueues__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_RenderQueues__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_RenderQueues__Enum
} // namespace app::classes::types
