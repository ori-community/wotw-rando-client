#pragma once
#include <Modloader/app/structs/DamageSurfacesMap.h>
#include <Modloader/app/structs/DamageSurfacesMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageSurfacesMap {
        inline app::DamageSurfacesMap__Class** type_info() {
            static app::DamageSurfacesMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageSurfacesMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageSurfacesMap__Class* get_class() {
            return il2cpp::get_class<app::DamageSurfacesMap__Class>(type_info(), "", "DamageSurfacesMap");
        }
        inline app::DamageSurfacesMap* create() {
            return il2cpp::create_object<app::DamageSurfacesMap>(get_class());
        }
    } // namespace DamageSurfacesMap
} // namespace app::classes::types
