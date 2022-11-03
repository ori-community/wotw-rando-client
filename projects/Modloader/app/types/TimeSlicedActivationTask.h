#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeSlicedActivationTask {
        inline app::TimeSlicedActivationTask__Class** type_info = (app::TimeSlicedActivationTask__Class**)(modloader::win::memory::resolve_rva(0x0474CD80));
        inline app::TimeSlicedActivationTask__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedActivationTask__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedActivationTask");
        }
        inline app::TimeSlicedActivationTask* create() {
            return il2cpp::create_object<app::TimeSlicedActivationTask>(get_class());
        }
    } // namespace TimeSlicedActivationTask
} // namespace app::classes::types
