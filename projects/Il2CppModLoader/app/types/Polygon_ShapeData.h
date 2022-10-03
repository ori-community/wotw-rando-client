#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Polygon_ShapeData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Polygon_ShapeData__Class** type_info;
        inline app::Polygon_ShapeData__Class* get_class() {
            return il2cpp::get_nested_class<app::Polygon_ShapeData__Class>(type_info, "", "Polygon", "ShapeData");
        }
        inline app::Polygon_ShapeData* create() {
            return il2cpp::create_object<app::Polygon_ShapeData>(get_class());
        }
    } // namespace Polygon_ShapeData
} // namespace app::classes::types
