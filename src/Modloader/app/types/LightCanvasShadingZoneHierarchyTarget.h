#pragma once
#include <Modloader/app/structs/LightCanvasShadingZoneHierarchyTarget.h>
#include <Modloader/app/structs/LightCanvasShadingZoneHierarchyTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCanvasShadingZoneHierarchyTarget {
        inline app::LightCanvasShadingZoneHierarchyTarget__Class** type_info() {
            static app::LightCanvasShadingZoneHierarchyTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightCanvasShadingZoneHierarchyTarget__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightCanvasShadingZoneHierarchyTarget__Class* get_class() {
            return il2cpp::get_class<app::LightCanvasShadingZoneHierarchyTarget__Class>(type_info(), "", "LightCanvasShadingZoneHierarchyTarget");
        }
        inline app::LightCanvasShadingZoneHierarchyTarget* create() {
            return il2cpp::create_object<app::LightCanvasShadingZoneHierarchyTarget>(get_class());
        }
    } // namespace LightCanvasShadingZoneHierarchyTarget
} // namespace app::classes::types
