#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_DofBlurType__Enum {
        namespace {
            inline app::MoonRenderPipelineAsset_DofBlurType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineAsset_DofBlurType__Enum__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineAsset_DofBlurType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_DofBlurType__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset", "DofBlurType");
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
