#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvasShadingZoneHierarchyTarget {
        namespace {
            app::LightCanvasShadingZoneHierarchyTarget__Class* type_info_ref = nullptr;
        }
        app::LightCanvasShadingZoneHierarchyTarget__Class** type_info = &type_info_ref;
        inline app::LightCanvasShadingZoneHierarchyTarget__Class* get_class() {
            return il2cpp::get_class<app::LightCanvasShadingZoneHierarchyTarget__Class>(type_info, "", "LightCanvasShadingZoneHierarchyTarget");
        }
        inline app::LightCanvasShadingZoneHierarchyTarget* create() {
            return il2cpp::create_object<app::LightCanvasShadingZoneHierarchyTarget>(get_class());
        }
    } // namespace LightCanvasShadingZoneHierarchyTarget
} // namespace app::classes::types
