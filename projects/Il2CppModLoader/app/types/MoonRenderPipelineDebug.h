#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebug {
        inline app::MoonRenderPipelineDebug__Class** type_info = (app::MoonRenderPipelineDebug__Class**)(modloader::win::memory::resolve_rva(0x047313F8));
        inline app::MoonRenderPipelineDebug__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineDebug__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebug");
        }
        inline app::MoonRenderPipelineDebug* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebug>(get_class());
        }
    } // namespace MoonRenderPipelineDebug
} // namespace app::classes::types
