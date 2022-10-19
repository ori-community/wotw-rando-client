#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightCanvasShadingZoneHierarchyTarget {
        namespace {
            inline app::LightCanvasShadingZoneHierarchyTarget__Class* type_info_ref = nullptr;
        }
        inline app::LightCanvasShadingZoneHierarchyTarget__Class** type_info = &type_info_ref;
        inline app::LightCanvasShadingZoneHierarchyTarget__Class* get_class() {
            return il2cpp::get_class<app::LightCanvasShadingZoneHierarchyTarget__Class>(type_info, "", "LightCanvasShadingZoneHierarchyTarget");
        }
        inline app::LightCanvasShadingZoneHierarchyTarget* create() {
            return il2cpp::create_object<app::LightCanvasShadingZoneHierarchyTarget>(get_class());
        }
    } // namespace LightCanvasShadingZoneHierarchyTarget
} // namespace app::classes::types
