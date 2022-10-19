#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView__Array {
        inline app::MoonRenderPipelineView__Array__Class** type_info = (app::MoonRenderPipelineView__Array__Class**)(modloader::win::memory::resolve_rva(0x04750830));
        inline app::MoonRenderPipelineView__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineView__Array__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView[]");
        }
        inline app::MoonRenderPipelineView__Array* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView__Array>(get_class());
        }
    } // namespace MoonRenderPipelineView__Array
} // namespace app::classes::types
