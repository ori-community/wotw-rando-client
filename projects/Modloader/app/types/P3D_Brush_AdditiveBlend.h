#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace P3D_Brush_AdditiveBlend {
        inline app::P3D_Brush_AdditiveBlend__Class** type_info = (app::P3D_Brush_AdditiveBlend__Class**)(modloader::win::memory::resolve_rva(0x04771850));
        inline app::P3D_Brush_AdditiveBlend__Class* get_class() {
            return il2cpp::get_nested_class<app::P3D_Brush_AdditiveBlend__Class>(type_info, "", "P3D_Brush", "AdditiveBlend");
        }
        inline app::P3D_Brush_AdditiveBlend* create() {
            return il2cpp::create_object<app::P3D_Brush_AdditiveBlend>(get_class());
        }
    } // namespace P3D_Brush_AdditiveBlend
} // namespace app::classes::types
