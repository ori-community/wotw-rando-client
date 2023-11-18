#pragma once
#include <Modloader/app/structs/MoonRenderPipelineAsset_DofBlurType__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_DofBlurType__Enum__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset_DofBlurType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_DofBlurType__Enum {
        inline app::MoonRenderPipelineAsset_DofBlurType__Enum__Class** type_info() {
            static app::MoonRenderPipelineAsset_DofBlurType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineAsset_DofBlurType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineAsset_DofBlurType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_DofBlurType__Enum__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineAsset", "DofBlurType");
        }
        inline app::MoonRenderPipelineAsset_DofBlurType__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_DofBlurType__Enum>(get_class());
        }
        inline app::MoonRenderPipelineAsset_DofBlurType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonRenderPipelineAsset_DofBlurType__Enum__Array>(get_class(), size);
        }
        inline app::MoonRenderPipelineAsset_DofBlurType__Enum__Array* create_array(const std::vector<app::MoonRenderPipelineAsset_DofBlurType__Enum*>& items) {
            return il2cpp::array_new<app::MoonRenderPipelineAsset_DofBlurType__Enum__Array>(get_class(), items);
        }
    } // namespace MoonRenderPipelineAsset_DofBlurType__Enum
} // namespace app::classes::types
