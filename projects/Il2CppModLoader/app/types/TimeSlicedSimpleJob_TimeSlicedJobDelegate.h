#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedSimpleJob_TimeSlicedJobDelegate {
        namespace {
            app::TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class* type_info_ref = nullptr;
        }
        app::TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class** type_info = &type_info_ref;
        inline app::TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSlicedSimpleJob_TimeSlicedJobDelegate__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedSimpleJob", "TimeSlicedJobDelegate");
        }
        inline app::TimeSlicedSimpleJob_TimeSlicedJobDelegate* create() {
            return il2cpp::create_object<app::TimeSlicedSimpleJob_TimeSlicedJobDelegate>(get_class());
        }
    } // namespace TimeSlicedSimpleJob_TimeSlicedJobDelegate
} // namespace app::classes::types
