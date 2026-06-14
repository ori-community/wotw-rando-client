#pragma once
#include <Modloader/app/structs/MoonRenderPipeline.h>
#include <Modloader/app/structs/MoonRenderPipeline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipeline {
        inline app::MoonRenderPipeline__Class** type_info() {
            static app::MoonRenderPipeline__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipeline__Class**)(modloader::win::memory::resolve_rva(0x0470DE18));
            }
            return cache;
        }
        inline app::MoonRenderPipeline__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipeline__Class>(type_info(), "Moon.Rendering", "MoonRenderPipeline");
        }
        inline app::MoonRenderPipeline* create() {
            return il2cpp::create_object<app::MoonRenderPipeline>(get_class());
        }
    } // namespace MoonRenderPipeline
} // namespace app::classes::types
