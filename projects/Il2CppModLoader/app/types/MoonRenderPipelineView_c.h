#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_c {
        inline app::MoonRenderPipelineView_c__Class** type_info = (app::MoonRenderPipelineView_c__Class**)(modloader::win::memory::resolve_rva(0x047910B8));
        inline app::MoonRenderPipelineView_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_c__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "<>c");
        }
        inline app::MoonRenderPipelineView_c* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_c>(get_class());
        }
    } // namespace MoonRenderPipelineView_c
} // namespace app::classes::types
