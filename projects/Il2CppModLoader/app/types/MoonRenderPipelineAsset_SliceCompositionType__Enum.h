#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset_SliceCompositionType__Enum {
        namespace {
            app::MoonRenderPipelineAsset_SliceCompositionType__Enum__Class* type_info_ref = nullptr;
        }
        app::MoonRenderPipelineAsset_SliceCompositionType__Enum__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineAsset_SliceCompositionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineAsset_SliceCompositionType__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset", "SliceCompositionType");
        }
        inline app::MoonRenderPipelineAsset_SliceCompositionType__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset_SliceCompositionType__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineAsset_SliceCompositionType__Enum
} // namespace app::classes::types
