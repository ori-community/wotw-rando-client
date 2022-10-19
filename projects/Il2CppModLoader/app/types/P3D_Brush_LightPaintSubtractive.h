#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace P3D_Brush_LightPaintSubtractive {
        inline app::P3D_Brush_LightPaintSubtractive__Class** type_info = (app::P3D_Brush_LightPaintSubtractive__Class**)(modloader::win::memory::resolve_rva(0x0478D2C0));
        inline app::P3D_Brush_LightPaintSubtractive__Class* get_class() {
            return il2cpp::get_nested_class<app::P3D_Brush_LightPaintSubtractive__Class>(type_info, "", "P3D_Brush", "LightPaintSubtractive");
        }
        inline app::P3D_Brush_LightPaintSubtractive* create() {
            return il2cpp::create_object<app::P3D_Brush_LightPaintSubtractive>(get_class());
        }
    } // namespace P3D_Brush_LightPaintSubtractive
} // namespace app::classes::types
