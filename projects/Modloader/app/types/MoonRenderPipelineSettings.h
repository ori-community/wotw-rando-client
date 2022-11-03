#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineSettings {
        inline app::MoonRenderPipelineSettings__Class** type_info = (app::MoonRenderPipelineSettings__Class**)(modloader::win::memory::resolve_rva(0x047708F8));
        inline app::MoonRenderPipelineSettings__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineSettings__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineSettings");
        }
        inline app::MoonRenderPipelineSettings* create() {
            return il2cpp::create_object<app::MoonRenderPipelineSettings>(get_class());
        }
    } // namespace MoonRenderPipelineSettings
} // namespace app::classes::types
