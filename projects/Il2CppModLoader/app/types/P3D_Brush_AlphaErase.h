#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace P3D_Brush_AlphaErase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::P3D_Brush_AlphaErase__Class** type_info;
        inline app::P3D_Brush_AlphaErase__Class* get_class() {
            return il2cpp::get_nested_class<app::P3D_Brush_AlphaErase__Class>(type_info, "", "P3D_Brush", "AlphaErase");
        }
        inline app::P3D_Brush_AlphaErase* create() {
            return il2cpp::create_object<app::P3D_Brush_AlphaErase>(get_class());
        }
    } // namespace P3D_Brush_AlphaErase
} // namespace app::classes::types
