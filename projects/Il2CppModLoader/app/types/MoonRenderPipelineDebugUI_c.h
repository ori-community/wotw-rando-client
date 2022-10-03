#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderPipelineDebugUI_c__Class** type_info;
        inline app::MoonRenderPipelineDebugUI_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebugUI_c__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebugUI", "<>c");
        }
        inline app::MoonRenderPipelineDebugUI_c* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI_c>(get_class());
        }
    } // namespace MoonRenderPipelineDebugUI_c
} // namespace app::classes::types
