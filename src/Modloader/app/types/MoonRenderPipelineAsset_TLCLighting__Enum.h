#pragma once
#include <Modloader/app/structs/MoonRenderPipelineAsset_TLCLighting__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_TLCLighting__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_TLCLighting__Enum {
        inline app::MoonRenderPipelineAsset_TLCLighting__Enum__Class** type_info() {
            static app::MoonRenderPipelineAsset_TLCLighting__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineAsset_TLCLighting__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineAsset_TLCLighting__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_TLCLighting__Enum__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineAsset", "TLCLighting");
        }
        inline app::MoonRenderPipelineAsset_TLCLighting__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_TLCLighting__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_TLCLighting__Enum
} // namespace app::classes::types
