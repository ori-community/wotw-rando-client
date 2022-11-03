#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace P3D_Brush_LightPaintAdditive {
        inline app::P3D_Brush_LightPaintAdditive__Class** type_info = (app::P3D_Brush_LightPaintAdditive__Class**)(modloader::win::memory::resolve_rva(0x047862A8));
        inline app::P3D_Brush_LightPaintAdditive__Class* get_class() {
            return il2cpp::get_nested_class<app::P3D_Brush_LightPaintAdditive__Class>(type_info, "", "P3D_Brush", "LightPaintAdditive");
        }
        inline app::P3D_Brush_LightPaintAdditive* create() {
            return il2cpp::create_object<app::P3D_Brush_LightPaintAdditive>(get_class());
        }
    } // namespace P3D_Brush_LightPaintAdditive
} // namespace app::classes::types
