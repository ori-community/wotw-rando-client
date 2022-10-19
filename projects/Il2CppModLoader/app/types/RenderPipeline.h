#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderPipeline {
        inline app::RenderPipeline__Class** type_info = (app::RenderPipeline__Class**)(modloader::win::memory::resolve_rva(0x0478A420));
        inline app::RenderPipeline__Class* get_class() {
            return il2cpp::get_class<app::RenderPipeline__Class>(type_info, "UnityEngine.Experimental.Rendering", "RenderPipeline");
        }
        inline app::RenderPipeline* create() {
            return il2cpp::create_object<app::RenderPipeline>(get_class());
        }
    } // namespace RenderPipeline
} // namespace app::classes::types
