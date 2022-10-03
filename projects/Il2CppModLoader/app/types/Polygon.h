#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Polygon {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Polygon__Class** type_info;
        inline app::Polygon__Class* get_class() {
            return il2cpp::get_class<app::Polygon__Class>(type_info, "TriangleNet.Geometry", "Polygon");
        }
        inline app::Polygon* create() {
            return il2cpp::create_object<app::Polygon>(get_class());
        }
    } // namespace Polygon
} // namespace app::classes::types
