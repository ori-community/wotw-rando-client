#pragma once
#include <Modloader/app/structs/DamageSurfacesMap_DamageSurfaceMapEntry.h>
#include <Modloader/app/structs/DamageSurfacesMap_DamageSurfaceMapEntry__Array.h>
#include <Modloader/app/structs/DamageSurfacesMap_DamageSurfaceMapEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageSurfacesMap_DamageSurfaceMapEntry {
        inline app::DamageSurfacesMap_DamageSurfaceMapEntry__Class** type_info() {
            static app::DamageSurfacesMap_DamageSurfaceMapEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageSurfacesMap_DamageSurfaceMapEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageSurfacesMap_DamageSurfaceMapEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageSurfacesMap_DamageSurfaceMapEntry__Class>(type_info(), "", "DamageSurfacesMap", "DamageSurfaceMapEntry");
        }
        inline app::DamageSurfacesMap_DamageSurfaceMapEntry* create() {
            return il2cpp::create_object<app::DamageSurfacesMap_DamageSurfaceMapEntry>(get_class());
        }
        inline app::DamageSurfacesMap_DamageSurfaceMapEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageSurfacesMap_DamageSurfaceMapEntry__Array>(get_class(), size);
        }
        inline app::DamageSurfacesMap_DamageSurfaceMapEntry__Array* create_array(const std::vector<app::DamageSurfacesMap_DamageSurfaceMapEntry*>& items) {
            return il2cpp::array_new<app::DamageSurfacesMap_DamageSurfaceMapEntry__Array>(get_class(), items);
        }
    } // namespace DamageSurfacesMap_DamageSurfaceMapEntry
} // namespace app::classes::types
