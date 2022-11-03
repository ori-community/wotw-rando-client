#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace P3D_Brush_LightPaintErase {
        inline app::P3D_Brush_LightPaintErase__Class** type_info = (app::P3D_Brush_LightPaintErase__Class**)(modloader::win::memory::resolve_rva(0x04753740));
        inline app::P3D_Brush_LightPaintErase__Class* get_class() {
            return il2cpp::get_nested_class<app::P3D_Brush_LightPaintErase__Class>(type_info, "", "P3D_Brush", "LightPaintErase");
        }
        inline app::P3D_Brush_LightPaintErase* create() {
            return il2cpp::create_object<app::P3D_Brush_LightPaintErase>(get_class());
        }
    } // namespace P3D_Brush_LightPaintErase
} // namespace app::classes::types
