#pragma once
#include <Modloader/app/structs/MoonRenderPipelineView__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineView__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView__Array {
        inline app::MoonRenderPipelineView__Array__Class** type_info() {
            static app::MoonRenderPipelineView__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipelineView__Array__Class**)(modloader::win::memory::resolve_rva(0x04750830));
            }
            return cache;
        }
        inline app::MoonRenderPipelineView__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineView__Array__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineView[]");
        }
        inline app::MoonRenderPipelineView__Array* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView__Array>(get_class());
        }
    } // namespace MoonRenderPipelineView__Array
} // namespace app::classes::types
