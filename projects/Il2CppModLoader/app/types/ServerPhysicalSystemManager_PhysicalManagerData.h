#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerPhysicalSystemManager_PhysicalManagerData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerPhysicalSystemManager_PhysicalManagerData__Class** type_info;
        inline app::ServerPhysicalSystemManager_PhysicalManagerData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerPhysicalSystemManager_PhysicalManagerData__Class>(type_info, "", "ServerPhysicalSystemManager", "PhysicalManagerData");
        }
        inline app::ServerPhysicalSystemManager_PhysicalManagerData* create() {
            return il2cpp::create_object<app::ServerPhysicalSystemManager_PhysicalManagerData>(get_class());
        }
        inline app::ServerPhysicalSystemManager_PhysicalManagerData__Boxed* box(app::ServerPhysicalSystemManager_PhysicalManagerData value) {
            return il2cpp::box_value<app::ServerPhysicalSystemManager_PhysicalManagerData__Boxed>(get_class(), value);
        }
    } // namespace ServerPhysicalSystemManager_PhysicalManagerData
} // namespace app::classes::types
