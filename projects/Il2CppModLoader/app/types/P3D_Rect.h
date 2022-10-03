#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace P3D_Rect {
        extern IL2CPP_MODLOADER_DLLEXPORT app::P3D_Rect__Class** type_info;
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
