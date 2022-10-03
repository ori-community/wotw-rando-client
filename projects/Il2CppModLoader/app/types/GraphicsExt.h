#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GraphicsExt {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GraphicsExt__Class** type_info;
        inline app::GraphicsExt__Class* get_class() {
            return il2cpp::get_class<app::GraphicsExt__Class>(type_info, "Moon.Rendering", "GraphicsExt");
        }
        inline app::GraphicsExt* create() {
            return il2cpp::create_object<app::GraphicsExt>(get_class());
        }
    } // namespace GraphicsExt
} // namespace app::classes::types
