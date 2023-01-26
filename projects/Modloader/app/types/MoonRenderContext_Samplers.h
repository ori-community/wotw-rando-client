#pragma once
#include <Modloader/app/structs/MoonRenderContext_Samplers.h>
#include <Modloader/app/structs/MoonRenderContext_Samplers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderContext_Samplers {
        inline app::MoonRenderContext_Samplers__Class** type_info() {
            static app::MoonRenderContext_Samplers__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderContext_Samplers__Class**)(modloader::win::memory::resolve_rva(0x04704ED0));
            }
            return cache;
        }
        inline app::MoonRenderContext_Samplers__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderContext_Samplers__Class>(type_info(), "Moon.Rendering", "MoonRenderContext", "Samplers");
        }
        inline app::MoonRenderContext_Samplers* create() {
            return il2cpp::create_object<app::MoonRenderContext_Samplers>(get_class());
        }
    } // namespace MoonRenderContext_Samplers
} // namespace app::classes::types
