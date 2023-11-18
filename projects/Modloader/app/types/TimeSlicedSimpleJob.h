#pragma once
#include <Modloader/app/structs/TimeSlicedSimpleJob.h>
#include <Modloader/app/structs/TimeSlicedSimpleJob__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedSimpleJob {
        inline app::TimeSlicedSimpleJob__Class** type_info() {
            static app::TimeSlicedSimpleJob__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeSlicedSimpleJob__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeSlicedSimpleJob__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedSimpleJob__Class>(type_info(), "Moon.TimeSlicer", "TimeSlicedSimpleJob");
        }
        inline app::TimeSlicedSimpleJob* create() {
            return il2cpp::create_object<app::TimeSlicedSimpleJob>(get_class());
        }
    } // namespace TimeSlicedSimpleJob
} // namespace app::classes::types
