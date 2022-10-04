#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPolygon {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPolygon__Class** type_info;
        inline app::IPolygon__Class* get_class() {
            return il2cpp::get_class<app::IPolygon__Class>(type_info, "TriangleNet.Geometry", "IPolygon");
        }
        inline app::IPolygon* create() {
            return il2cpp::create_object<app::IPolygon>(get_class());
        }
    } // namespace IPolygon
} // namespace app::classes::types
