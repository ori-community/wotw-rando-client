#pragma once
#include <Modloader/app/structs/TimeSlicedHierarchyDisablingTask.h>
#include <Modloader/app/structs/TimeSlicedHierarchyDisablingTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedHierarchyDisablingTask {
        inline app::TimeSlicedHierarchyDisablingTask__Class** type_info() {
            static app::TimeSlicedHierarchyDisablingTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeSlicedHierarchyDisablingTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeSlicedHierarchyDisablingTask__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedHierarchyDisablingTask__Class>(type_info(), "Moon.TimeSlicer", "TimeSlicedHierarchyDisablingTask");
        }
        inline app::TimeSlicedHierarchyDisablingTask* create() {
            return il2cpp::create_object<app::TimeSlicedHierarchyDisablingTask>(get_class());
        }
    } // namespace TimeSlicedHierarchyDisablingTask
} // namespace app::classes::types
