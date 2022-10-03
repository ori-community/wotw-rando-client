#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace P3D_Brush_LightPaintSubtractive {
        extern IL2CPP_MODLOADER_DLLEXPORT app::P3D_Brush_LightPaintSubtractive__Class** type_info;
        inline app::P3D_Brush_LightPaintSubtractive__Class* get_class() {
            return il2cpp::get_nested_class<app::P3D_Brush_LightPaintSubtractive__Class>(type_info, "", "P3D_Brush", "LightPaintSubtractive");
        }
        inline app::P3D_Brush_LightPaintSubtractive* create() {
            return il2cpp::create_object<app::P3D_Brush_LightPaintSubtractive>(get_class());
        }
    } // namespace P3D_Brush_LightPaintSubtractive
} // namespace app::classes::types
