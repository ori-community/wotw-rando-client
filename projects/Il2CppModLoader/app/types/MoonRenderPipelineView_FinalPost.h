#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_FinalPost {
        inline app::MoonRenderPipelineView_FinalPost__Class** type_info = (app::MoonRenderPipelineView_FinalPost__Class**)(modloader::win::memory::resolve_rva(0x047900E0));
        inline app::MoonRenderPipelineView_FinalPost__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_FinalPost__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "FinalPost");
        }
        inline app::MoonRenderPipelineView_FinalPost* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_FinalPost>(get_class());
        }
    } // namespace MoonRenderPipelineView_FinalPost
} // namespace app::classes::types
