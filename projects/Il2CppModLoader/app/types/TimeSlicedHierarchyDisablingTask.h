#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedHierarchyDisablingTask {
        namespace {
            app::TimeSlicedHierarchyDisablingTask__Class* type_info_ref = nullptr;
        }
        app::TimeSlicedHierarchyDisablingTask__Class** type_info = &type_info_ref;
        inline app::TimeSlicedHierarchyDisablingTask__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedHierarchyDisablingTask__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedHierarchyDisablingTask");
        }
        inline app::TimeSlicedHierarchyDisablingTask* create() {
            return il2cpp::create_object<app::TimeSlicedHierarchyDisablingTask>(get_class());
        }
    } // namespace TimeSlicedHierarchyDisablingTask
} // namespace app::classes::types
