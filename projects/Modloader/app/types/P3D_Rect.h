#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace P3D_Rect {
        inline app::P3D_Rect__Class** type_info = (app::P3D_Rect__Class**)(modloader::win::memory::resolve_rva(0x047259B8));
        inline app::P3D_Rect__Class* get_class() {
            return il2cpp::get_class<app::P3D_Rect__Class>(type_info, "", "P3D_Rect");
        }
        inline app::P3D_Rect* create() {
            return il2cpp::create_object<app::P3D_Rect>(get_class());
        }
        inline app::P3D_Rect__Boxed* box(app::P3D_Rect value) {
            return il2cpp::box_value<app::P3D_Rect__Boxed>(get_class(), value);
        }
    } // namespace P3D_Rect
} // namespace app::classes::types
