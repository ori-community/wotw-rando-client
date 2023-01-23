#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeSlicedSimpleJob__Class.h>
#include <Modloader/app/structs/TimeSlicedSimpleJob.h>

namespace app::classes::types {
    namespace TimeSlicedSimpleJob {
        namespace {
            inline app::TimeSlicedSimpleJob__Class* type_info_ref = nullptr;
        }
        inline app::TimeSlicedSimpleJob__Class** type_info = &type_info_ref;
        inline app::TimeSlicedSimpleJob__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedSimpleJob__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedSimpleJob");
        }
        inline app::TimeSlicedSimpleJob* create() {
            return il2cpp::create_object<app::TimeSlicedSimpleJob>(get_class());
        }
    } // namespace TimeSlicedSimpleJob
} // namespace app::classes::types
