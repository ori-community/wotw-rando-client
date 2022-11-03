#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace P3D_Brush_LightPaintBlur {
        inline app::P3D_Brush_LightPaintBlur__Class** type_info = (app::P3D_Brush_LightPaintBlur__Class**)(modloader::win::memory::resolve_rva(0x0473A590));
        inline app::P3D_Brush_LightPaintBlur__Class* get_class() {
            return il2cpp::get_nested_class<app::P3D_Brush_LightPaintBlur__Class>(type_info, "", "P3D_Brush", "LightPaintBlur");
        }
        inline app::P3D_Brush_LightPaintBlur* create() {
            return il2cpp::create_object<app::P3D_Brush_LightPaintBlur>(get_class());
        }
    } // namespace P3D_Brush_LightPaintBlur
} // namespace app::classes::types
