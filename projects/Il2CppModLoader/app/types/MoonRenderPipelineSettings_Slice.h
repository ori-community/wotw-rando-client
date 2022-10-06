#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineSettings_Slice {
        namespace {
            app::MoonRenderPipelineSettings_Slice__Class* type_info_ref = nullptr;
        }
        app::MoonRenderPipelineSettings_Slice__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineSettings_Slice__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineSettings_Slice__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineSettings", "Slice");
        }
        inline app::MoonRenderPipelineSettings_Slice* create() {
            return il2cpp::create_object<app::MoonRenderPipelineSettings_Slice>(get_class());
        }
        inline app::MoonRenderPipelineSettings_Slice__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonRenderPipelineSettings_Slice__Array>(get_class(), size);
        }
        inline app::MoonRenderPipelineSettings_Slice__Array* create_array(const std::vector<app::MoonRenderPipelineSettings_Slice*>& items) {
            return il2cpp::array_new<app::MoonRenderPipelineSettings_Slice__Array>(get_class(), items);
        }
    } // namespace MoonRenderPipelineSettings_Slice
} // namespace app::classes::types
