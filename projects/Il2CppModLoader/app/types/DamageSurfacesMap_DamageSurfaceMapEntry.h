#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageSurfacesMap_DamageSurfaceMapEntry {
        namespace {
            app::DamageSurfacesMap_DamageSurfaceMapEntry__Class* type_info_ref = nullptr;
        }
        app::DamageSurfacesMap_DamageSurfaceMapEntry__Class** type_info = &type_info_ref;
        inline app::DamageSurfacesMap_DamageSurfaceMapEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageSurfacesMap_DamageSurfaceMapEntry__Class>(type_info, "", "DamageSurfacesMap", "DamageSurfaceMapEntry");
        }
        inline app::DamageSurfacesMap_DamageSurfaceMapEntry* create() {
            return il2cpp::create_object<app::DamageSurfacesMap_DamageSurfaceMapEntry>(get_class());
        }
        inline app::DamageSurfacesMap_DamageSurfaceMapEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageSurfacesMap_DamageSurfaceMapEntry__Array>(get_class(), size);
        }
    } // namespace DamageSurfacesMap_DamageSurfaceMapEntry
} // namespace app::classes::types
