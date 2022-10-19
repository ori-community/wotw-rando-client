#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineAsset {
        inline app::MoonRenderPipelineAsset__Class** type_info = (app::MoonRenderPipelineAsset__Class**)(modloader::win::memory::resolve_rva(0x0474DB10));
        inline app::MoonRenderPipelineAsset__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineAsset__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineAsset");
        }
        inline app::MoonRenderPipelineAsset* create() {
            return il2cpp::create_object<app::MoonRenderPipelineAsset>(get_class());
        }
    } // namespace MoonRenderPipelineAsset
} // namespace app::classes::types
