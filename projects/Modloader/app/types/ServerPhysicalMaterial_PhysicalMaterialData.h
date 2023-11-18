#pragma once
#include <Modloader/app/structs/ServerPhysicalMaterial_PhysicalMaterialData.h>
#include <Modloader/app/structs/ServerPhysicalMaterial_PhysicalMaterialData__Boxed.h>
#include <Modloader/app/structs/ServerPhysicalMaterial_PhysicalMaterialData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerPhysicalMaterial_PhysicalMaterialData {
        inline app::ServerPhysicalMaterial_PhysicalMaterialData__Class** type_info() {
            static app::ServerPhysicalMaterial_PhysicalMaterialData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerPhysicalMaterial_PhysicalMaterialData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerPhysicalMaterial_PhysicalMaterialData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerPhysicalMaterial_PhysicalMaterialData__Class>(type_info(), "", "ServerPhysicalMaterial", "PhysicalMaterialData");
        }
        inline app::ServerPhysicalMaterial_PhysicalMaterialData* create() {
            return il2cpp::create_object<app::ServerPhysicalMaterial_PhysicalMaterialData>(get_class());
        }
        inline app::ServerPhysicalMaterial_PhysicalMaterialData__Boxed* box(app::ServerPhysicalMaterial_PhysicalMaterialData value) {
            return il2cpp::box_value<app::ServerPhysicalMaterial_PhysicalMaterialData__Boxed>(get_class(), value);
        }
    } // namespace ServerPhysicalMaterial_PhysicalMaterialData
} // namespace app::classes::types
