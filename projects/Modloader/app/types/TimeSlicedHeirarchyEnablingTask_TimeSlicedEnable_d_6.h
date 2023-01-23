#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__Class.h>
#include <Modloader/app/structs/TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6.h>

namespace app::classes::types {
    namespace TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6 {
        inline app::TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__Class** type_info = (app::TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__Class**)(modloader::win::memory::resolve_rva(0x0472C678));
        inline app::TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedHeirarchyEnablingTask", "<TimeSlicedEnable>d__6");
        }
        inline app::TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6* create() {
            return il2cpp::create_object<app::TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6>(get_class());
        }
    } // namespace TimeSlicedHeirarchyEnablingTask_TimeSlicedEnable_d_6
} // namespace app::classes::types
