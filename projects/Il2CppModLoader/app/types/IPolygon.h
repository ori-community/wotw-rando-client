#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPolygon {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPolygon__Class** type_info;
        inline app::IPolygon__Class* get_class() {
            return il2cpp::get_class<app::IPolygon__Class>(type_info, "TriangleNet.Geometry", "IPolygon");
        }
    } // namespace IPolygon
} // namespace app::classes::types
