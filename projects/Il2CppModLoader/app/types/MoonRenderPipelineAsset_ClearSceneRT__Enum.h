#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_ClearSceneRT__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderPipelineAsset_ClearSceneRT__Enum__Class** type_info;
        inline app::MoonRenderPipelineAsset_ClearSceneRT__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_ClearSceneRT__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset", "ClearSceneRT");
        }
        inline app::MoonRenderPipelineAsset_ClearSceneRT__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_ClearSceneRT__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_ClearSceneRT__Enum
} // namespace app::classes::types
