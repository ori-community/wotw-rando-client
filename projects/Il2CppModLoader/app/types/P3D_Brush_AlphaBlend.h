#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace P3D_Brush_AlphaBlend {
        inline app::P3D_Brush_AlphaBlend__Class** type_info = (app::P3D_Brush_AlphaBlend__Class**)(modloader::win::memory::resolve_rva(0x04716A00));
        inline app::P3D_Brush_AlphaBlend__Class* get_class() {
            return il2cpp::get_nested_class<app::P3D_Brush_AlphaBlend__Class>(type_info, "", "P3D_Brush", "AlphaBlend");
        }
        inline app::P3D_Brush_AlphaBlend* create() {
            return il2cpp::create_object<app::P3D_Brush_AlphaBlend>(get_class());
        }
    } // namespace P3D_Brush_AlphaBlend
} // namespace app::classes::types
