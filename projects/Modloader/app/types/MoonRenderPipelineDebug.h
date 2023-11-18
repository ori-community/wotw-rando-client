#pragma once
#include <Modloader/app/structs/MoonRenderPipelineDebug.h>
#include <Modloader/app/structs/MoonRenderPipelineDebug__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebug {
        inline app::MoonRenderPipelineDebug__Class** type_info() {
            static app::MoonRenderPipelineDebug__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipelineDebug__Class**)(modloader::win::memory::resolve_rva(0x047313F8));
            }
            return cache;
        }
        inline app::MoonRenderPipelineDebug__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineDebug__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineDebug");
        }
        inline app::MoonRenderPipelineDebug* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebug>(get_class());
        }
    } // namespace MoonRenderPipelineDebug
} // namespace app::classes::types
