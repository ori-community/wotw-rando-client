#pragma once
#include <Modloader/app/structs/TimeSlicedSimpleJob_TimeSlicedJobDelegate.h>
#include <Modloader/app/structs/TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedSimpleJob_TimeSlicedJobDelegate {
        inline app::TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class** type_info() {
            static app::TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class>(type_info(), "Moon.TimeSlicer", "TimeSlicedSimpleJob", "TimeSlicedJobDelegate");
        }
        inline app::TimeSlicedSimpleJob_TimeSlicedJobDelegate* create() {
            return il2cpp::create_object<app::TimeSlicedSimpleJob_TimeSlicedJobDelegate>(get_class());
        }
    } // namespace TimeSlicedSimpleJob_TimeSlicedJobDelegate
} // namespace app::classes::types
