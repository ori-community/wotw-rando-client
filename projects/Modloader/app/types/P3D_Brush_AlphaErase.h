#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace P3D_Brush_AlphaErase {
        inline app::P3D_Brush_AlphaErase__Class** type_info = (app::P3D_Brush_AlphaErase__Class**)(modloader::win::memory::resolve_rva(0x047194A0));
        inline app::P3D_Brush_AlphaErase__Class* get_class() {
            return il2cpp::get_nested_class<app::P3D_Brush_AlphaErase__Class>(type_info, "", "P3D_Brush", "AlphaErase");
        }
        inline app::P3D_Brush_AlphaErase* create() {
            return il2cpp::create_object<app::P3D_Brush_AlphaErase>(get_class());
        }
    } // namespace P3D_Brush_AlphaErase
} // namespace app::classes::types
