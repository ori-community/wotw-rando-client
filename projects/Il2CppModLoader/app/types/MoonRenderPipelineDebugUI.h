#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderPipelineDebugUI__Class** type_info;
        inline app::MoonRenderPipelineDebugUI__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineDebugUI__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebugUI");
        }
        inline app::MoonRenderPipelineDebugUI* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI>(get_class());
        }
    } // namespace MoonRenderPipelineDebugUI
} // namespace app::classes::types
