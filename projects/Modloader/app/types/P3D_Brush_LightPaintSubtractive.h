#pragma once
#include <Modloader/app/structs/P3D_Brush_LightPaintSubtractive.h>
#include <Modloader/app/structs/P3D_Brush_LightPaintSubtractive__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace P3D_Brush_LightPaintSubtractive {
        inline app::P3D_Brush_LightPaintSubtractive__Class** type_info() {
            static app::P3D_Brush_LightPaintSubtractive__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::P3D_Brush_LightPaintSubtractive__Class**)(modloader::win::memory::resolve_rva(0x0478D2C0));
            }
            return cache;
        }
        inline app::P3D_Brush_LightPaintSubtractive__Class* get_class() {
            return il2cpp::get_nested_class<app::P3D_Brush_LightPaintSubtractive__Class>(type_info(), "", "P3D_Brush", "LightPaintSubtractive");
        }
        inline app::P3D_Brush_LightPaintSubtractive* create() {
            return il2cpp::create_object<app::P3D_Brush_LightPaintSubtractive>(get_class());
        }
    } // namespace P3D_Brush_LightPaintSubtractive
} // namespace app::classes::types
