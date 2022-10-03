#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageSurfacesMap_DamageSurfaceMapEntry__Array {
        namespace {
            app::DamageSurfacesMap_DamageSurfaceMapEntry__Array__Class* type_info_ref = nullptr;
        }
        app::DamageSurfacesMap_DamageSurfaceMapEntry__Array__Class** type_info = &type_info_ref;
        inline app::DamageSurfacesMap_DamageSurfaceMapEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageSurfacesMap_DamageSurfaceMapEntry__Array__Class>(type_info, "", "DamageSurfacesMap+DamageSurfaceMapEntry[]");
        }
        inline app::DamageSurfacesMap_DamageSurfaceMapEntry__Array* create() {
            return il2cpp::create_object<app::DamageSurfacesMap_DamageSurfaceMapEntry__Array>(get_class());
        }
    } // namespace DamageSurfacesMap_DamageSurfaceMapEntry__Array
} // namespace app::classes::types
