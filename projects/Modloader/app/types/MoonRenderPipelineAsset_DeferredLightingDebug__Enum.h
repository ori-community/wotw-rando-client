#pragma once
#include <Modloader/app/structs/MoonRenderPipelineAsset_DeferredLightingDebug__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_DeferredLightingDebug__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_DeferredLightingDebug__Enum {
        inline app::MoonRenderPipelineAsset_DeferredLightingDebug__Enum__Class** type_info() {
            static app::MoonRenderPipelineAsset_DeferredLightingDebug__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineAsset_DeferredLightingDebug__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineAsset_DeferredLightingDebug__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_DeferredLightingDebug__Enum__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineAsset", "DeferredLightingDebug");
        }
        inline app::MoonRenderPipelineAsset_DeferredLightingDebug__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_DeferredLightingDebug__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_DeferredLightingDebug__Enum
} // namespace app::classes::types
