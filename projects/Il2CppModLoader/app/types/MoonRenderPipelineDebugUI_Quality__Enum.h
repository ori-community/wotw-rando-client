#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI_Quality__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderPipelineDebugUI_Quality__Enum__Class** type_info;
        inline app::MoonRenderPipelineDebugUI_Quality__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebugUI_Quality__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebugUI", "Quality");
        }
        inline app::MoonRenderPipelineDebugUI_Quality__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI_Quality__Enum>(get_class());
        }
        inline app::MoonRenderPipelineDebugUI_Quality__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonRenderPipelineDebugUI_Quality__Enum__Array>(get_class(), size);
        }
    } // namespace MoonRenderPipelineDebugUI_Quality__Enum
} // namespace app::classes::types
