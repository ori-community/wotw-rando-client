#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeSlicedHierarchyDisablingTask {
        namespace {
            inline app::TimeSlicedHierarchyDisablingTask__Class* type_info_ref = nullptr;
        }
        inline app::TimeSlicedHierarchyDisablingTask__Class** type_info = &type_info_ref;
        inline app::TimeSlicedHierarchyDisablingTask__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedHierarchyDisablingTask__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedHierarchyDisablingTask");
        }
        inline app::TimeSlicedHierarchyDisablingTask* create() {
            return il2cpp::create_object<app::TimeSlicedHierarchyDisablingTask>(get_class());
        }
    } // namespace TimeSlicedHierarchyDisablingTask
} // namespace app::classes::types
