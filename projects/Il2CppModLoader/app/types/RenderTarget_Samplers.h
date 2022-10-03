#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderTarget_Samplers {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderTarget_Samplers__Class** type_info;
        inline app::RenderTarget_Samplers__Class* get_class() {
            return il2cpp::get_nested_class<app::RenderTarget_Samplers__Class>(type_info, "Moon.Rendering", "RenderTarget", "Samplers");
        }
        inline app::RenderTarget_Samplers* create() {
            return il2cpp::create_object<app::RenderTarget_Samplers>(get_class());
        }
    } // namespace RenderTarget_Samplers
} // namespace app::classes::types
