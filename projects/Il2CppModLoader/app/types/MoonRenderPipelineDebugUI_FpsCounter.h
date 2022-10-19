#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI_FpsCounter {
        namespace {
            inline app::MoonRenderPipelineDebugUI_FpsCounter__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineDebugUI_FpsCounter__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineDebugUI_FpsCounter__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebugUI_FpsCounter__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebugUI", "FpsCounter");
        }
        inline app::MoonRenderPipelineDebugUI_FpsCounter* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI_FpsCounter>(get_class());
        }
        inline app::MoonRenderPipelineDebugUI_FpsCounter__Boxed* box(app::MoonRenderPipelineDebugUI_FpsCounter value) {
            return il2cpp::box_value<app::MoonRenderPipelineDebugUI_FpsCounter__Boxed>(get_class(), value);
        }
    } // namespace MoonRenderPipelineDebugUI_FpsCounter
} // namespace app::classes::types
