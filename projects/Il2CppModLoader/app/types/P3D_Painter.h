#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace P3D_Painter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::P3D_Painter__Class** type_info;
        inline app::P3D_Painter__Class* get_class() {
            return il2cpp::get_class<app::P3D_Painter__Class>(type_info, "", "P3D_Painter");
        }
        inline app::P3D_Painter* create() {
            return il2cpp::create_object<app::P3D_Painter>(get_class());
        }
    } // namespace P3D_Painter
} // namespace app::classes::types
