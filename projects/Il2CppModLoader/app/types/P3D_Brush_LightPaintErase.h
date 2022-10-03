#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace P3D_Brush_LightPaintErase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::P3D_Brush_LightPaintErase__Class** type_info;
        inline app::P3D_Brush_LightPaintErase__Class* get_class() {
            return il2cpp::get_nested_class<app::P3D_Brush_LightPaintErase__Class>(type_info, "", "P3D_Brush", "LightPaintErase");
        }
        inline app::P3D_Brush_LightPaintErase* create() {
            return il2cpp::create_object<app::P3D_Brush_LightPaintErase>(get_class());
        }
    } // namespace P3D_Brush_LightPaintErase
} // namespace app::classes::types
