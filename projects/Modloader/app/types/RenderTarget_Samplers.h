#pragma once
#include <Modloader/app/structs/RenderTarget_Samplers.h>
#include <Modloader/app/structs/RenderTarget_Samplers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderTarget_Samplers {
        inline app::RenderTarget_Samplers__Class** type_info() {
            static app::RenderTarget_Samplers__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RenderTarget_Samplers__Class**)(modloader::win::memory::resolve_rva(0x0478FBF0));
            }
            return cache;
        }
        inline app::RenderTarget_Samplers__Class* get_class() {
            return il2cpp::get_nested_class<app::RenderTarget_Samplers__Class>(type_info(), "Moon.Rendering", "RenderTarget", "Samplers");
        }
        inline app::RenderTarget_Samplers* create() {
            return il2cpp::create_object<app::RenderTarget_Samplers>(get_class());
        }
    } // namespace RenderTarget_Samplers
} // namespace app::classes::types
