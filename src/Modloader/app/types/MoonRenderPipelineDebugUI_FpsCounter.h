#pragma once
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_FpsCounter.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_FpsCounter__Boxed.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_FpsCounter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebugUI_FpsCounter {
        inline app::MoonRenderPipelineDebugUI_FpsCounter__Class** type_info() {
            static app::MoonRenderPipelineDebugUI_FpsCounter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineDebugUI_FpsCounter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineDebugUI_FpsCounter__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebugUI_FpsCounter__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineDebugUI", "FpsCounter");
        }
        inline app::MoonRenderPipelineDebugUI_FpsCounter* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebugUI_FpsCounter>(get_class());
        }
        inline app::MoonRenderPipelineDebugUI_FpsCounter__Boxed* box(app::MoonRenderPipelineDebugUI_FpsCounter value) {
            return il2cpp::box_value<app::MoonRenderPipelineDebugUI_FpsCounter__Boxed>(get_class(), value);
        }
    } // namespace MoonRenderPipelineDebugUI_FpsCounter
} // namespace app::classes::types
