#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/P3D_Brush_SubtractiveBlend__Class.h>
#include <Modloader/app/structs/P3D_Brush_SubtractiveBlend.h>

namespace app::classes::types {
    namespace P3D_Brush_SubtractiveBlend {
        inline app::P3D_Brush_SubtractiveBlend__Class** type_info = (app::P3D_Brush_SubtractiveBlend__Class**)(modloader::win::memory::resolve_rva(0x047567F8));
        inline app::P3D_Brush_SubtractiveBlend__Class* get_class() {
            return il2cpp::get_nested_class<app::P3D_Brush_SubtractiveBlend__Class>(type_info, "", "P3D_Brush", "SubtractiveBlend");
        }
        inline app::P3D_Brush_SubtractiveBlend* create() {
            return il2cpp::create_object<app::P3D_Brush_SubtractiveBlend>(get_class());
        }
    } // namespace P3D_Brush_SubtractiveBlend
} // namespace app::classes::types
