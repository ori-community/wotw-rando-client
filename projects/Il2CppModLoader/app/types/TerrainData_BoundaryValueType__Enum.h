#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TerrainData_BoundaryValueType__Enum {
        namespace {
            app::TerrainData_BoundaryValueType__Enum__Class* type_info_ref = nullptr;
        }
        app::TerrainData_BoundaryValueType__Enum__Class** type_info = &type_info_ref;
        inline app::TerrainData_BoundaryValueType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainData_BoundaryValueType__Enum__Class>(type_info, "UnityEngine", "TerrainData", "BoundaryValueType");
        }
        inline app::TerrainData_BoundaryValueType__Enum* create() {
            return il2cpp::create_object<app::TerrainData_BoundaryValueType__Enum>(get_class());
        }
    } // namespace TerrainData_BoundaryValueType__Enum
} // namespace app::classes::types
