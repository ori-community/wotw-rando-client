#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2 {
        inline app::TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2__Class** type_info = (app::TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2__Class**)(modloader::win::memory::resolve_rva(0x0476FD90));
        inline app::TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedHierarchyDisablingTask", "<TimeSlicedDisable>d__2");
        }
        inline app::TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2* create() {
            return il2cpp::create_object<app::TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2>(get_class());
        }
    } // namespace TimeSlicedHierarchyDisablingTask_TimeSlicedDisable_d_2
} // namespace app::classes::types
