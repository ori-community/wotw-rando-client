#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderContext_Samplers {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderContext_Samplers__Class** type_info;
        inline app::MoonRenderContext_Samplers__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderContext_Samplers__Class>(type_info, "Moon.Rendering", "MoonRenderContext", "Samplers");
        }
        inline app::MoonRenderContext_Samplers* create() {
            return il2cpp::create_object<app::MoonRenderContext_Samplers>(get_class());
        }
    } // namespace MoonRenderContext_Samplers
} // namespace app::classes::types
