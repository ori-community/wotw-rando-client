#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_GodRaySrcRT__Array {
        inline app::MoonRenderPipelineView_GodRaySrcRT__Array__Class** type_info = (app::MoonRenderPipelineView_GodRaySrcRT__Array__Class**)(modloader::win::memory::resolve_rva(0x04723E48));
        inline app::MoonRenderPipelineView_GodRaySrcRT__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineView_GodRaySrcRT__Array__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView+GodRaySrcRT[]");
        }
        inline app::MoonRenderPipelineView_GodRaySrcRT__Array* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_GodRaySrcRT__Array>(get_class());
        }
    } // namespace MoonRenderPipelineView_GodRaySrcRT__Array
} // namespace app::classes::types
