#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI_Quality__Enum__Array {
        namespace {
            app::MoonRenderPipelineDebugUI_Quality__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::MoonRenderPipelineDebugUI_Quality__Enum__Array__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineDebugUI_Quality__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineDebugUI_Quality__Enum__Array__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebugUI+Quality[]");
        }
        inline app::MoonRenderPipelineDebugUI_Quality__Enum__Array* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI_Quality__Enum__Array>(get_class());
        }
    } // namespace MoonRenderPipelineDebugUI_Quality__Enum__Array
} // namespace app::classes::types
