#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_ClearSceneRT__Enum {
        inline app::MoonRenderPipelineAsset_ClearSceneRT__Enum__Class** type_info = (app::MoonRenderPipelineAsset_ClearSceneRT__Enum__Class**)(modloader::win::memory::resolve_rva(0x04784058));
        inline app::MoonRenderPipelineAsset_ClearSceneRT__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_ClearSceneRT__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset", "ClearSceneRT");
        }
        inline app::MoonRenderPipelineAsset_ClearSceneRT__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_ClearSceneRT__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_ClearSceneRT__Enum
} // namespace app::classes::types
