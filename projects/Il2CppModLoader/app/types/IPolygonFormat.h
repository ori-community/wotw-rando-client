#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPolygonFormat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPolygonFormat__Class** type_info;
        inline app::IPolygonFormat__Class* get_class() {
            return il2cpp::get_class<app::IPolygonFormat__Class>(type_info, "TriangleNet.IO", "IPolygonFormat");
        }
        inline app::IPolygonFormat* create() {
            return il2cpp::create_object<app::IPolygonFormat>(get_class());
        }
    } // namespace IPolygonFormat
} // namespace app::classes::types
