#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderTarget_Samplers {
        inline app::RenderTarget_Samplers__Class** type_info = (app::RenderTarget_Samplers__Class**)(modloader::win::memory::resolve_rva(0x0478FBF0));
        inline app::RenderTarget_Samplers__Class* get_class() {
            return il2cpp::get_nested_class<app::RenderTarget_Samplers__Class>(type_info, "Moon.Rendering", "RenderTarget", "Samplers");
        }
        inline app::RenderTarget_Samplers* create() {
            return il2cpp::create_object<app::RenderTarget_Samplers>(get_class());
        }
    } // namespace RenderTarget_Samplers
} // namespace app::classes::types
