#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerPhysicalMaterial_PhysicalMaterialData {
        namespace {
            inline app::ServerPhysicalMaterial_PhysicalMaterialData__Class* type_info_ref = nullptr;
        }
        inline app::ServerPhysicalMaterial_PhysicalMaterialData__Class** type_info = &type_info_ref;
        inline app::ServerPhysicalMaterial_PhysicalMaterialData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerPhysicalMaterial_PhysicalMaterialData__Class>(type_info, "", "ServerPhysicalMaterial", "PhysicalMaterialData");
        }
        inline app::ServerPhysicalMaterial_PhysicalMaterialData* create() {
            return il2cpp::create_object<app::ServerPhysicalMaterial_PhysicalMaterialData>(get_class());
        }
        inline app::ServerPhysicalMaterial_PhysicalMaterialData__Boxed* box(app::ServerPhysicalMaterial_PhysicalMaterialData value) {
            return il2cpp::box_value<app::ServerPhysicalMaterial_PhysicalMaterialData__Boxed>(get_class(), value);
        }
    } // namespace ServerPhysicalMaterial_PhysicalMaterialData
} // namespace app::classes::types
