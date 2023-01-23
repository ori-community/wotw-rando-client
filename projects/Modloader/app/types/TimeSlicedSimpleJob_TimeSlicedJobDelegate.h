#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class.h>
#include <Modloader/app/structs/TimeSlicedSimpleJob_TimeSlicedJobDelegate.h>

namespace app::classes::types {
    namespace TimeSlicedSimpleJob_TimeSlicedJobDelegate {
        namespace {
            inline app::TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class* type_info_ref = nullptr;
        }
        inline app::TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class** type_info = &type_info_ref;
        inline app::TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedSimpleJob", "TimeSlicedJobDelegate");
        }
        inline app::TimeSlicedSimpleJob_TimeSlicedJobDelegate* create() {
            return il2cpp::create_object<app::TimeSlicedSimpleJob_TimeSlicedJobDelegate>(get_class());
        }
    } // namespace TimeSlicedSimpleJob_TimeSlicedJobDelegate
} // namespace app::classes::types
