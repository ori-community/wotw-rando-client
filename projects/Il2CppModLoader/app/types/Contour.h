#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Contour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Contour__Class** type_info;
        inline app::Contour__Class* get_class() {
            return il2cpp::get_class<app::Contour__Class>(type_info, "TriangleNet.Geometry", "Contour");
        }
        inline app::Contour* create() {
            return il2cpp::create_object<app::Contour>(get_class());
        }
    } // namespace Contour
} // namespace app::classes::types
