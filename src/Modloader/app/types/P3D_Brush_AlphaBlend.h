#pragma once
#include <Modloader/app/structs/P3D_Brush_AlphaBlend.h>
#include <Modloader/app/structs/P3D_Brush_AlphaBlend__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace P3D_Brush_AlphaBlend {
        inline app::P3D_Brush_AlphaBlend__Class** type_info() {
            static app::P3D_Brush_AlphaBlend__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::P3D_Brush_AlphaBlend__Class**)(modloader::win::memory::resolve_rva(0x04716A00));
            }
            return cache;
        }
        inline app::P3D_Brush_AlphaBlend__Class* get_class() {
            return il2cpp::get_nested_class<app::P3D_Brush_AlphaBlend__Class>(type_info(), "", "P3D_Brush", "AlphaBlend");
        }
        inline app::P3D_Brush_AlphaBlend* create() {
            return il2cpp::create_object<app::P3D_Brush_AlphaBlend>(get_class());
        }
    } // namespace P3D_Brush_AlphaBlend
} // namespace app::classes::types
