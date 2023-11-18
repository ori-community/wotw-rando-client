#pragma once
#include <Modloader/app/structs/TerrainData_BoundaryValueType__Enum.h>
#include <Modloader/app/structs/TerrainData_BoundaryValueType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainData_BoundaryValueType__Enum {
        inline app::TerrainData_BoundaryValueType__Enum__Class** type_info() {
            static app::TerrainData_BoundaryValueType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TerrainData_BoundaryValueType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TerrainData_BoundaryValueType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainData_BoundaryValueType__Enum__Class>(type_info(), "UnityEngine", "TerrainData", "BoundaryValueType");
        }
        inline app::TerrainData_BoundaryValueType__Enum* create() {
            return il2cpp::create_object<app::TerrainData_BoundaryValueType__Enum>(get_class());
        }
    } // namespace TerrainData_BoundaryValueType__Enum
} // namespace app::classes::types
