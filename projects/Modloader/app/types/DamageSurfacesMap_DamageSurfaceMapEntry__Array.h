#pragma once
#include <Modloader/app/structs/DamageSurfacesMap_DamageSurfaceMapEntry__Array.h>
#include <Modloader/app/structs/DamageSurfacesMap_DamageSurfaceMapEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageSurfacesMap_DamageSurfaceMapEntry__Array {
        inline app::DamageSurfacesMap_DamageSurfaceMapEntry__Array__Class** type_info() {
            static app::DamageSurfacesMap_DamageSurfaceMapEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageSurfacesMap_DamageSurfaceMapEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageSurfacesMap_DamageSurfaceMapEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageSurfacesMap_DamageSurfaceMapEntry__Array__Class>(type_info(), "", "DamageSurfacesMap+DamageSurfaceMapEntry[]");
        }
        inline app::DamageSurfacesMap_DamageSurfaceMapEntry__Array* create() {
            return il2cpp::create_object<app::DamageSurfacesMap_DamageSurfaceMapEntry__Array>(get_class());
        }
    } // namespace DamageSurfacesMap_DamageSurfaceMapEntry__Array
} // namespace app::classes::types
