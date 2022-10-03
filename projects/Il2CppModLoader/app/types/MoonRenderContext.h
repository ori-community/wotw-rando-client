#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderContext__Class** type_info;
        inline app::MoonRenderContext__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderContext__Class>(type_info, "Moon.Rendering", "MoonRenderContext");
        }
        inline app::MoonRenderContext* create() {
            return il2cpp::create_object<app::MoonRenderContext>(get_class());
        }
    } // namespace MoonRenderContext
} // namespace app::classes::types
