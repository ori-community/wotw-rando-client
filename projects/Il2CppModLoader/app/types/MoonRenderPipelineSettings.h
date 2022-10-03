#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderPipelineSettings__Class** type_info;
        inline app::MoonRenderPipelineSettings__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineSettings__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineSettings");
        }
        inline app::MoonRenderPipelineSettings* create() {
            return il2cpp::create_object<app::MoonRenderPipelineSettings>(get_class());
        }
    } // namespace MoonRenderPipelineSettings
} // namespace app::classes::types
