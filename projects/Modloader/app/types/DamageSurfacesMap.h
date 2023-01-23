#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageSurfacesMap__Class.h>
#include <Modloader/app/structs/DamageSurfacesMap.h>

namespace app::classes::types {
    namespace DamageSurfacesMap {
        namespace {
            inline app::DamageSurfacesMap__Class* type_info_ref = nullptr;
        }
        inline app::DamageSurfacesMap__Class** type_info = &type_info_ref;
        inline app::DamageSurfacesMap__Class* get_class() {
            return il2cpp::get_class<app::DamageSurfacesMap__Class>(type_info, "", "DamageSurfacesMap");
        }
        inline app::DamageSurfacesMap* create() {
            return il2cpp::create_object<app::DamageSurfacesMap>(get_class());
        }
    } // namespace DamageSurfacesMap
} // namespace app::classes::types
