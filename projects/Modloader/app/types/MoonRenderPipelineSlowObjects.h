#pragma once
#include <Modloader/app/structs/MoonRenderPipelineSlowObjects.h>
#include <Modloader/app/structs/MoonRenderPipelineSlowObjects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineSlowObjects {
        inline app::MoonRenderPipelineSlowObjects__Class** type_info() {
            static app::MoonRenderPipelineSlowObjects__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineSlowObjects__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineSlowObjects__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineSlowObjects__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineSlowObjects");
        }
        inline app::MoonRenderPipelineSlowObjects* create() {
            return il2cpp::create_object<app::MoonRenderPipelineSlowObjects>(get_class());
        }
    } // namespace MoonRenderPipelineSlowObjects
} // namespace app::classes::types
