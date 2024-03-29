#pragma once
#include <Modloader/app/structs/MoonRenderPipelineSettings.h>
#include <Modloader/app/structs/MoonRenderPipelineSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineSettings {
        inline app::MoonRenderPipelineSettings__Class** type_info() {
            static app::MoonRenderPipelineSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipelineSettings__Class**)(modloader::win::memory::resolve_rva(0x047708F8));
            }
            return cache;
        }
        inline app::MoonRenderPipelineSettings__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineSettings__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineSettings");
        }
        inline app::MoonRenderPipelineSettings* create() {
            return il2cpp::create_object<app::MoonRenderPipelineSettings>(get_class());
        }
    } // namespace MoonRenderPipelineSettings
} // namespace app::classes::types
