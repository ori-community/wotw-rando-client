#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderPipelineView__Class** type_info;
        inline app::MoonRenderPipelineView__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineView__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView");
        }
        inline app::MoonRenderPipelineView* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView>(get_class());
        }
        inline app::MoonRenderPipelineView__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonRenderPipelineView__Array>(get_class(), size);
        }
    } // namespace MoonRenderPipelineView
} // namespace app::classes::types
