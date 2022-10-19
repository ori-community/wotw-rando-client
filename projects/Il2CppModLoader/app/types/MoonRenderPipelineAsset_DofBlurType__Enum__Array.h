#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_DofBlurType__Enum__Array {
        namespace {
            inline app::MoonRenderPipelineAsset_DofBlurType__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineAsset_DofBlurType__Enum__Array__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineAsset_DofBlurType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineAsset_DofBlurType__Enum__Array__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset+DofBlurType[]");
        }
        inline app::MoonRenderPipelineAsset_DofBlurType__Enum__Array* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_DofBlurType__Enum__Array>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_DofBlurType__Enum__Array
} // namespace app::classes::types
