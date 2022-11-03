#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_ClearSliceBlurRT__Enum {
        namespace {
            inline app::MoonRenderPipelineAsset_ClearSliceBlurRT__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineAsset_ClearSliceBlurRT__Enum__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineAsset_ClearSliceBlurRT__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_ClearSliceBlurRT__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset", "ClearSliceBlurRT");
        }
        inline app::MoonRenderPipelineAsset_ClearSliceBlurRT__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_ClearSliceBlurRT__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_ClearSliceBlurRT__Enum
} // namespace app::classes::types
