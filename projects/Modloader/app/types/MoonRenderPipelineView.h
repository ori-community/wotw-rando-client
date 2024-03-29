#pragma once
#include <Modloader/app/structs/MoonRenderPipelineView.h>
#include <Modloader/app/structs/MoonRenderPipelineView__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView {
        inline app::MoonRenderPipelineView__Class** type_info() {
            static app::MoonRenderPipelineView__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipelineView__Class**)(modloader::win::memory::resolve_rva(0x04779E20));
            }
            return cache;
        }
        inline app::MoonRenderPipelineView__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineView__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineView");
        }
        inline app::MoonRenderPipelineView* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView>(get_class());
        }
        inline app::MoonRenderPipelineView__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonRenderPipelineView__Array>(get_class(), size);
        }
        inline app::MoonRenderPipelineView__Array* create_array(const std::vector<app::MoonRenderPipelineView*>& items) {
            return il2cpp::array_new<app::MoonRenderPipelineView__Array>(get_class(), items);
        }
    } // namespace MoonRenderPipelineView
} // namespace app::classes::types
